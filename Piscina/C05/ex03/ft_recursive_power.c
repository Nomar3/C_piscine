/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:51:47 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/16 11:31:59 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
	{
		nb *= ft_recursive_power(nb, power - 1);
		return (nb);
	}
	return (1);
}
/*int main (void)
{
    printf("%d", ft_recursive_power(6, 3));
    return 0;
}*/
