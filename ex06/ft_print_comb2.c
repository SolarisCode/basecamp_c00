/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:18:25 by coder             #+#    #+#             */
/*   Updated: 2021/10/07 00:37:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigits(int c)
{
	int	i;
	int	x;

	i = 48;
	if (c < 10)
	{
		x = 48 + c;
		write(1, &i, 1);
		write(1, &x, 1);
	}
	else
	{
		i = 48 + (c / 10);
		x = 48 + (c % 10);
		write(1, &i, 1);
		write(1, &x, 1);
	}
}

void	ft_print_comb2(void)
{
	int	count_i;
	int	count_x;

	count_i = 0;
	while (count_i < 99)
	{
		count_x = count_i + 1;
		while (count_x < 100)
		{
			ft_putdigits(count_i);
			write(1, " ", 1);
			ft_putdigits(count_x);
			if (count_i < 98)
				write(1, ", ", 2);
			count_x ++;
		}
		count_i ++;
	}
}
