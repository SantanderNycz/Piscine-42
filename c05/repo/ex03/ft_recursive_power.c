/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:32:45 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/10 20:24:02 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
/*
int	main(void)
{
	int	nbr;
	int	pwr;

	nbr = 4;
	pwr = 3;
	printf("%d", ft_recursive_power(nbr, pwr));
	return (0);
}*/
