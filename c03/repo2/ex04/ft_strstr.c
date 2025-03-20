/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 17:23:31 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/05 20:06:31 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j]) == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str [] = "O meu ha(ix7), o lepo lepo";
    char to_find [] = "o lepo lepo";

    ft_strstr(str, to_find);
    printf("em '%s', voce COM CERTEZA encontra '%s'", str, to_find);
}*/
