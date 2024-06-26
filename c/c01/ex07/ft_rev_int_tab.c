/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emalonso <emalonso@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 18:25:26 by emalonso          #+#    #+#             */
/*   Updated: 2023/04/11 19:14:32 by emalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (size / 2 > i)
	{
		temp = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = temp;
		size--;
		i++;
	}
}

//version 2 
#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;
    
    i = size - 1;
    j = 0;
    while (i > j)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i--;
        j++;
    }
}

int main(void)
{
   int arr[] = {1,2,3};
   ft_rev_int_tab(arr, 3);
   printf("%d %d %d\n", arr[0], arr[1], arr[2]);
   return (0);
}
