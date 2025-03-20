/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:33:45 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/12 11:31:54 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*r;
	int	i;

	min = 2;
	max = 4;
	i = 0;
	r = ft_range(min, max);

	while (i < (max - min))
	{
		printf("%d ", r[i]);
		i++;
	}
}*/
