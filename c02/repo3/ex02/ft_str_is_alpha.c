/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 15:03:14 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/04 12:04:04 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	c;
	int	j;

	c = 0;
	j = 1;
	while ((str[c] != '\0' && j > 0) && str[0] != '\0')
	{
		if ((str[c] > 64 && str[c] < 91) || (str[c] > 96 && str[c] < 123))
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		c++;
	}
	return (j);
}
/*
int	main(void)
{
	int	i;
	char	r[] = "aaaaa";

	i = ft_str_is_alpha(r);
	printf("Só carac alf? 0 é não, 1 é top: %d", i);
}*/
