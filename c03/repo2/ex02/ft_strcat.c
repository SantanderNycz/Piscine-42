/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 12:33:34 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/05 18:53:07 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' || dest[i + j] != '\0')
	{
		dest [i + j] = src[j];
		j++;
	}
	return (dest);
}
/*
int main(void)
{
    char    src[] = "tigrinho fdp";
    char    dest[] = "solta a carta, car*lho";

    ft_strcat(dest, src);
    printf("%s", dest);
}*/
