/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsantand <lsantand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:39:39 by lsantand          #+#    #+#             */
/*   Updated: 2025/03/12 14:07:44 by lsantand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
	else
	{
		ft_putstr(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
