/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vistas.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:51:28 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/09 23:21:00 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fn_vista_cu(int n, int res[4][4], int pos[2])
{
	int	c;
	int	f;
	int	num_cajas;
	int	height_max;
	int	i;

	c = pos[0];
	f = pos[1];
	i = 0;
	num_cajas = 0;
	height_max = 0;
	while (i < n - 1)
	{
		if (res[i][c] > height_max)
		{
			num_cajas++;
			height_max = res[i][c];
		}
		i++;
	}
	return (num_cajas);
}

int	fn_vista_cd(int n, int res[4][4], int pos[2])
{
	int	c;
	int	f;
	int	num_cajas;
	int	height_max;
	int	i;

	c = pos[0];
	f = pos[1];
	i = n - 1;
	num_cajas = 0;
	height_max = 0;
	while (i >= 0)
	{
		if (res[i][c] > height_max)
		{
			num_cajas++;
			height_max = res[i][c];
		}
		i--;
	}
	return (num_cajas);
}

int	fn_vista_rl(int n, int res[4][4], int pos[2])
{
	int	c;
	int	f;
	int	num_cajas;
	int	height_max;
	int	i;

	c = pos[0];
	f = pos[1];
	i = 0;
	num_cajas = 0;
	height_max = 0;
	while (i < n - 1)
	{
		if (res[f][i] > height_max)
		{
			num_cajas++;
			height_max = res[f][i];
		}
		i++;
	}
	return (num_cajas);
}

int	fn_vista_rr(int n, int res[4][4], int pos[2])
{
	int	c;
	int	f;
	int	num_cajas;
	int	height_max;
	int	i;

	c = pos[0];
	f = pos[1];
	i = n - 1;
	num_cajas = 0;
	height_max = 0;
	while (i >= 0)
	{
		if (res[f][i] > height_max)
		{
			num_cajas++;
			height_max = res[f][i];
		}
		i--;
	}
	return (num_cajas);
}

int	fn_vistas(int n, int res[4][4], int enunc[16], int pos[2])
{
	int	r;
	int	f;
	int	c;

	c = pos[0];
	f = pos[1];
	r = 1;
	if (fn_vista_cu(n, res, pos) > enunc[f])
		r = 0;
	if (fn_vista_cd(n, res, pos) > enunc[f + n])
		r = 0;
	if (fn_vista_rl(n, res, pos) > enunc[c + (n * 2)])
		r = 0;
	if (fn_vista_rr(n, res, pos) > enunc[c + (n * 3)])
		r = 0;
	return (r);
}
