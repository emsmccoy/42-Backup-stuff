/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bailo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprats-c <mprats-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:25:56 by mprats-c          #+#    #+#             */
/*   Updated: 2023/04/09 23:26:01 by mprats-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fn_pasito_palante(int n, int pos[2])
{
	int	habemus_solucion;
	int	c;
	int	r;
	int	end_r;

	c = pos[0];
	r = pos[1];
	end_r = n - 1;
	habemus_solucion = 0;
	if (c < end_r)
		c++;
	else if ((c == end_r) && (r < end_r))
	{
		c = 0;
		r++;
	}
	else if ((c == end_r) && (r == end_r))
		habemus_solucion = 1;
	pos[0] = c;
	pos[1] = r;
	return (habemus_solucion);
}

int	fn_un_pasito_patras(int n, int pos[2], int res[4][4])
{
	int	habemus_solucion;
	int	c;
	int	r;

	c = pos[0];
	r = pos[1];
	habemus_solucion = 0;
	if (c > 0)
	{
		res[r][c] = 0;
		c--;
	}
	else if ((c == 0) && (r > 0))
	{
		res[r][c] = 0;
		r--;
		c = n;
	}
	else if ((c == 0) && (r == 0))
	{
		habemus_solucion = 2;
	}
	pos[0] = c;
	pos[1] = r;
	return (habemus_solucion);
}
