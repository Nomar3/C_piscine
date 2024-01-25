/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:35:46 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/12 10:58:16 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			i ++;
			j ++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
/*int main (void)
{
	char src[] = "Hola ";
	char dest[] = "buenas";
	//printf ("Src: %s\n", src);
	//printf ("Dest: %s\n", dest);
	printf ("Cat: %s\n", ft_strcat (src, dest));
}*/
