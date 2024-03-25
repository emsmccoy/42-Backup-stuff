/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:04:45 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/11 18:23:55 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

// version 2 

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (str[len])
    {
        len++;
    }
    return len;
}
