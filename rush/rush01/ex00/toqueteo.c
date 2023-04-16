/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toqueteo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprats-c <mprats-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:25:33 by mprats-c          #+#    #+#             */
/*   Updated: 2023/04/09 23:45:49 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_matriz(int n, int m[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(((m[j][i]) + '0'));
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}

/* inicializa la matriz res a ceros por todas partes*/
void	fn_inic(int n, int res[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			res[i][j] = 0;
			j++;
		}
		i++;
	}
}
