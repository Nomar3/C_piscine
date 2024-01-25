/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarin-j <rmarin-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:51:14 by rmarin-j          #+#    #+#             */
/*   Updated: 2023/11/16 11:10:21 by rmarin-j         ###   ########.fr       */
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
	if (argc < 2)
		ft_print_name(argv[0]);
	return (0);
}
