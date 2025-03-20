/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:00:53 by lsantand          #+#    #+#             */
/*   Updated: 2025/02/25 17:34:16 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	ft_rev_int_tab(arr, size);
	printf("o inteiro apontado é %d", arr[size -1]);
}*/
