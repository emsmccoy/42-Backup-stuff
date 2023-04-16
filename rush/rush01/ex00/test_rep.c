/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rep.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 22:52:54 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/09 23:16:00 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fn_vistas(n, res, enunc, pos);

int	fn_norep_f(int n, int res[4][4], int f)
{
	int	i;
	int	numvig;
	int	r;
	int	cantnumvig;

	r = 1;
	numvig = 1;
	while ((numvig <= n) && (r == 1))
	{
		i = 0;
		cantnumvig = 0;
		while ((i <= n) && (r == 1))
		{
			if (res[f][i] == numvig)
				cantnumvig++;
			if (cantnumvig > 1)
				r = 0;
			i++;
		}
		numvig++;
	}
	return (r);
}

int	fn_norep_c(int n, int res[4][4], int c)
{
	int	i;
	int	numvig;
	int	r;
	int	cantnumvig;

	r = 1;
	numvig = 1;
	while ((numvig <= n) && (r == 1))
	{
		i = 0;
		cantnumvig = 0;
		while ((i <= n) && (r == 1))
		{
			if (res[i][c] == numvig)
				cantnumvig++;
			if (cantnumvig > 1)
				r = 0;
			i++;
		}
	numvig++;
	}
	return (r);
}

int	fn_norep(int n, int res[4][4], int f, int c)
{
	int	r;

	r = 1;
	r = r * fn_norep_f(n, res, f);
	r = r * fn_norep_c(n, res, c);
	return (r);
}

int	fn_go_on(int n, int res[4][4], int enunc[16], int pos[2])
{
	int	r;
	int	f;
	int	c;

	c = pos[0];
	f = pos[1];
	r = 1;
	r = r * fn_norep(n, res, f, c);
	r = r * fn_vistas(n, res, enunc, pos);
	return (r);
}
