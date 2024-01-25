/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:21:21 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/05 15:58:07 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'z'))
		{
			return (0);
		}
		else if ((str[i] < 'a') && (str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main (void)
{

	printf ("%d\n", ft_str_is_alpha ("eFe"));
	return 0;
}*/
