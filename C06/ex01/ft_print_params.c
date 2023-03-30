/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 17:27:00 by jhogonca          #+#    #+#             */
/*   Updated: 2023/03/25 17:27:34 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	if (ac > 1)
	{
		while (av[c])
		{
			while (av[c][i])
			{
				write(1, &av[c][i], 1);
				i++;
			}
			write(1, "\n", 1);
			c++;
			i = 0;
		}
	}
	return (0);
}
