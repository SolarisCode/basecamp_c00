/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 00:47:34 by coder             #+#    #+#             */
/*   Updated: 2021/10/07 18:28:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	c;
	int	d;
	int	r;

	c = 48;
	if (nb >= 10)
	{
		d = nb / 10;
		ft_putnbr(d);
		r = nb % 10;
		ft_putnbr(r);
	}
	else if (nb < 0)
	{
		nb *= -1;
		c -= 3;
		write(1, &c, 1);
		ft_putnbr(nb);
	}
	else
	{
		c += nb;
		write(1, &c, 1);
	}
}
