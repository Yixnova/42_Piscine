/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:05:40 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:05:40 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - av[1][i] + 'A';
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - av[1][i] + 'A';
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}