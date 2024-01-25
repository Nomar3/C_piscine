/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:12:48 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/07 19:27:59 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	i = 0;
	while (
}
int main (void)
{
	char *src = "80000";
	char dest[] = "En un lugar de la mancha";
	unsigned int n = 2;

	printf ("Dest: %s\n", dest);
	printf ("Source: %s\n", src);
	printf ("N char: %u\n", n);
	printf ("New Dest: %s\n", ft_strncpy (dest, src, n));
	return 0;
}
