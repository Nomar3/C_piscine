/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:25:43 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/16 11:23:43 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;
	int	cont;

	x = 0;
	cont = 1;
	if (nb <= 0)
		return (0);
	while (x < (nb / 2))
	{
		cont = x * x;
		if (cont == nb)
			return (x);
		x++;
	}
	return (0);
}
/*int main (void)
{
    printf("%d", ft_sqrt(800));
    return 0;
}*/
