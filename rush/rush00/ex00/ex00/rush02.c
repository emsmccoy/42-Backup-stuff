/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 11:08:44 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/02 18:34:23 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c);

void	firstline(int a)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1 || i == a)
		{
			putchar('A');
		}
		else
		{
			putchar('B');
		}
		i++;
	}
	putchar('\n');
}

void	middleline(int a)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1 || i == a)
		{
			putchar('B');
		}
		else
		{
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}

void	lastline(int a)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1 || i == a)
		{
			putchar('C');
		}
		else
		{
			putchar('B');
		}
		i++;
	}
	putchar('\n');
}

void	rush(int a, int b)
{
	int	j;

	j = 1;
	firstline(a);
	while (j <= (b - 2))
	{
		middleline(a);
		j++;
	}
	if (b > 1)
	{
		lastline(a);
	}
}
