/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprats-c <mprats-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:31:26 by mprats-c          #+#    #+#             */
/*   Updated: 2023/04/09 23:50:21 by mprats-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		fn_go_on(int n, int res[4][4], int enunc[16], int pos[2]); 
void	fn_inic(int n, int res[4][4]);
void	print_matriz(int n, int m[4][4]);
int		fn_un_pasito_palante(int n, int pos[2]);
int		fn_un_pasito_patras(int n, int pos[2],int res[4][4]);
int		is_valid_string_length(char *str);
int		is_valid_space_after_number(char *str);
int		fn_valid_string_content(char *str);
void	transform_chars_to_int(char *str, int *enunc);
int		fn_verify_argc(int argc);




int	main(int argc, char *argv[])
{
	int		res[4][4];
	int		enunc[16];
	int		pos[2];
	int		n;
	int		f;
	int		c;
	char	*str;
	int		r;
   
	str = argv[1];
	n = 4;
	c = 0;
	f = 0;
	pos[0]=c;
	pos[1]=f;
	r = 1;
	r = r * is_valid_string_length(char *str);
	r = r * is_valid_space_after_number(char *str);
	r = r * fn_valid_string_content(char *str);
	r = r * transform_chars_to_int(char *str, int *enunc);
	r = r * fn_verify_argc(int argc);
	if (r = 1)
	{
		r = 0;
		fn_inic(n, res);
		while (r == 0)
		{
			if (res[f][c] < n)
			{
				res[f][c] = res[f][c] + 1;
				if (fn_go_on(n, res, enunc, pos) == 1)
					r = fn_un_pasito_palante(n , pos);
			}
			else if (res[f][c] == n)
			{
				r = fn_un_pasito_patras(n, pos, res);
			}
			if (r == 1)
				print_matriz(n, res);
			else if (r == 2)
				write(1, "Error\n", 6);
	}	
}
