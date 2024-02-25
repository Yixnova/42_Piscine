/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:05:22 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:05:23 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// 1. yöntem
int	main(void)
{
	write(1, "a\n", 2);
}
// 2. yöntem bir yerde newline istiyor sadece
int	main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			if (av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}			i++;
		}
	}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
}
