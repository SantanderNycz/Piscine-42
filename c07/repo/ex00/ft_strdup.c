/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:51:02 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/12 11:30:19 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	str = 0;
	while (str[len])
	{
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len) + 1);
	if (str == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = NULL;
	return (str);
}
/*
int	main(void)
{
	char	str[] = "à ferro e fogo não dá";
	printf("%s", ft_strdup(str));
}*/
