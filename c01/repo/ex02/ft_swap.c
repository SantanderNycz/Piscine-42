/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:25:03 by lsantand          #+#    #+#             */
/*   Updated: 2025/02/25 17:51:14 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	x;
	int	a;
	int	b;

	x = 1;
	a = 2;
	b = 3;

	ft_swap(&a, &b);
	printf("Deu certo, agora A é %d e B é %d", a, b);
}*/
