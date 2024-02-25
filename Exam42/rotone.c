/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:08:28 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:08:30 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	rotone(char * str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if ( (str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
			str[i] += 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] -= 25;
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
