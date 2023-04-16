/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:33:36 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/04 21:06:37 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num[2];
	char	comb[5];

	comb[2] = ' ';
	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1;
		while (num[1] <= 99)
		{
			comb[0] = num[0] / 10 + '0';
			comb[1] = num[0] % 10 + '0';
			comb[3] = num[1] / 10 + '0';
			comb[4] = num[1] % 10 + '0';
			write(1, &comb, 5);
			if (!(comb[0] == '9' && comb[1] == '8'))
			{
				write(1, ", ", 2);
			}
			num[1]++;
		}
		num[0]++;
	}
}
