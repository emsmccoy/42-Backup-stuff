/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segurata.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprats-c <mprats-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:26:31 by mprats-c          #+#    #+#             */
/*   Updated: 2023/04/09 23:50:26 by mprats-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_string_length(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len != 31)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	is_valid_space_after_number(char *str)
{	
	int	len;
	int r;

	r = 1;
	len = 0;
	while ((str[len] != '\0') && (r = 1))
	{
		if (str[len] != ' ')
		{
			r = 0;
		}
		len++;
	}
	return (r);
}

int	fn_valid_string_content(char *str)
{
	int	len;
	int	num_dentro_rango;
	int	num;
	int r;

	r = 1;
	len = 0;
	num_dentro_rango = 0;
	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			num = str[len] - '0';
			if (num < 1 || num > 4)
				r = 0;
		}
		if (len % 2 == 1) 
		{
			if (str[len] != ' ')
				r = 0;
		}
		len++;
	}
	return (r);
}

void	transform_chars_to_int(char *str, int *enunc)
{
	int	i;
	int	enunc_i;
	int	num;

	i = 0;
	enunc_i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			num = str[i] - '0';
			if (num >= 1 && num <= 4)
			{
				enunc[enunc_i++] = num;
			}
		}
		i++;
	}
}

int	fn_verify_argc(int argc)
{
	if (argc != 2)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int fn_verify_params(int argc, char *str, *enunc)
{
	int r;
	r = 1;
	r = r * is_valid_string_length(char *str);
	r = r * is_valid_space_after_number(char *str);
	r = r * fn_valid_string_content(char *str);
	r = r * transform_chars_to_int(char *str, int *enunc);
	r = r * fn_verify_argc(int argc);
	return (0);
}
