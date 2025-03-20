/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:32:22 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/10 20:23:18 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else
	{
		while (power > 0)
		{
			res = nb * res;
			power--;
		}
		return (res);
	}
}
/*
int	main(void)
{
	int	nbr;
	int	pwr;

	nbr = 6;
	pwr = 3;
	printf("%d", (ft_iterative_power(nbr, pwr)));
}*/
