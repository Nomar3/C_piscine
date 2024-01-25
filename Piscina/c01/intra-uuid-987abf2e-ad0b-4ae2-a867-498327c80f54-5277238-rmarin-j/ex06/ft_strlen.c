/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:56:09 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/01 16:59:19 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/
int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		str ++;
		cont ++;
	}
	return (cont);
}

/*int main (void)
{
	char *str;
	str = "HOLA";
	puts(str);
	printf("Contador: %d", ft_strlen(str));
	return (0);
}*/
