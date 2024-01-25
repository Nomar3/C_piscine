/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:18:06 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/15 22:16:28 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write (1, &name[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i != argc)
	{
		ft_print_name(argv[i]);
		i++;
	}
	return (0);
}
