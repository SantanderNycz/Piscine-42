/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:42:40 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/06 19:05:22 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	c;
	int	res;
	int	neg;

	res = 0;
	c = 0;
	neg = 1;
	while ((str[c] > 8 && str[c] < 14) || str[c] == 32)
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			neg *= -1;
		c++;
	}
	while (str[c] >= 48 && str[c] <= 57)
	{
		res = (res * 10 + (str[c] - 48));
		c++;
	}
	res = res * neg;
	return (res);
}
/*
int	main(void)
{
	char t[] = "  ---+--+1234ab567";

	printf("lança a boa: %d", ft_atoi(t));	
}*/
