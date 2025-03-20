/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:16:07 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/12 11:35:10 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	c;
	int	*temp;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	temp = malloc(sizeof(int) * (max - min));
	if (!(temp))
		return (-1);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		min++;
		i++;
	}
	range = &temp;
	return (i);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	**range;
	int	r;
	int	i;

	min = 1;
	max = 8;
	range = 0;
	r = ft_ultimate_range(range, min, max);
	i = 0;
	printf("%d ", r);
}*/
