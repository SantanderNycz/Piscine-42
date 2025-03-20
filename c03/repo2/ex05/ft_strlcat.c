/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:32:04 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/05 21:40:33 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < size && dest[i])
	{
		i++;
	}
	while ((i + j + 1) < size && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
	{
		dest[i + j] = '\0';
	}
	return (size);
}
/*
int main(void)
{
    char dest [50] = "tchuplac ";
    char src [] = "tchuplay";
    unsigned int size;

    size = 14;
    unsigned int res = ft_strlcat(dest, src, size);
    printf("String: %s", dest);
    printf("Comprimento total> %u", res);
}*/
