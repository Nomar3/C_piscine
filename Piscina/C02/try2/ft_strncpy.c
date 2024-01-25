/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:16:14 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/08 19:01:33 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}
/*int main (void)
{
	char src[] = "GGGG";
	char dest[] = "abdecededelmn";
	unsigned int n = 2;

	printf ("Dest: %s\n", dest);
	printf ("Source: %s\n", src);
	printf ("N char: %u\n", n);
	printf ("Dest fin: %s\n", ft_strncpy(dest, src, n));
	return 0;
}*/
