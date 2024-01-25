/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:45:33 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/05 16:08:45 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int main (void)
{
	printf ("%d\n", ft_str_is_printable ("SS\eSSF"));
	return 0;
}*/
