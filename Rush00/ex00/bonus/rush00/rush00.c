/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:35:44 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/17 19:35:46 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_lines(int len, char start, char middle, char last)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == len)
			ft_putchar(last);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	k;

	k = 1;
	if (x >= 1 && y >= 1)
	{
		while (k <= y)
		{
			if (k == 1 || k == y)
				ft_print_lines(x, 'o', '-', 'o');
			else
				ft_print_lines(x, '|', ' ', '|');
			k++;
		}
	}
}
