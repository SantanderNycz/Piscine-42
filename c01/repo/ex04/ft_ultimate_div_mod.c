/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:25:56 by lsantand          #+#    #+#             */
/*   Updated: 2025/02/25 17:45:05 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	a* = *a / *b;
	b* = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 80;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf("A divisão é %d e o módulo é %d", a, b);
}*/
