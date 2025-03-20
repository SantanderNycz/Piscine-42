/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 11:32:01 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/05 18:52:23 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s1[i] != '\0') && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	int i;
	char s1[] = "abcde";
	char s2[] = "abcfgh";
	unsigned int n;

	n = 2;
	i = ft_strncmp(s1, s2, n);
	printf("%d", i); 
}*/
