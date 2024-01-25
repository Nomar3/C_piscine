/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:35:24 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/12 16:04:02 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		i++;
		cont++;
	}
	return (cont);
}
/*int main (int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_strlen(argv[1]));
	return 0;
}*/
