/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:37:35 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/09 10:55:48 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main (void)
{
	char src[] = "HOLA";
	char dest[] = "ADIOS";

	printf ("Dest: %s\n", dest);	
	printf ("Source: %s\n", src);
	printf ("New Dest: %s\n", ft_strcpy (dest, src));
	return 0;	
}*/
