/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:18:09 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/05 22:23:53 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	res = s1[i] - s2[i];
	return (res);
}
/*
int main(void)
{
	int t;
	char s1[] = "azam";
	char s2[] = "alam";

	t = ft_strcmp(s1, s2);
	printf("%d", t);
}*/
