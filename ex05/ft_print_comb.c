/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 22:27:04 by coder             #+#    #+#             */
/*   Updated: 2021/10/06 11:40:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char i, char x, char y);

void	ft_print_comb(void)
{
	char	count_i;
	char	count_x;
	char	count_y;

	count_i = '0';
	while (count_i < '8')
	{
		count_x = count_i + 1;
		while (count_x < '9')
		{
			count_y = count_x + 1;
			while (count_y <= '9')
			{
				ft_putchar(count_i, count_x, count_y);
				count_y ++;
			}
			count_x ++;
		}
		count_i ++;
	}
}

void	ft_putchar(char i, char x, char y)
{
	write(1, &i, 1);
	write(1, &x, 1);
	write(1, &y, 1);
	if (i == '7' && x == '8' && y == '9')
		return ;
	write(1, ", ", 2);
}
