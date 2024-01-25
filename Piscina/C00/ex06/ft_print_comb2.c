/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:04:52 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/13 11:02:05 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char n)
{
	n = n + '0';
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			putchar(x / 10);
			putchar(x % 10);
			write (1, " ", 1);
			putchar(y / 10);
			putchar(y % 10);
			if (x != 98)
				write (1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*int main (void)
{
	ft_print_comb2();
	return 0;
}*/