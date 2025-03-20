/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:19:55 by lsantand          #+#    #+#             */
/*   Updated: 2025/02/25 17:43:59 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char	*str)
{
	char	*i;

	i = str;
	while (*i != '\0')
	{
		write(1, i, 1);
		i++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "Óh não, é o Braia!";
	
	ft_putstr(str);
}*/
