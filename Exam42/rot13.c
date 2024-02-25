/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:08:25 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:08:26 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	rot13(char *str)
{
	int	i;
	i = 0;
	while( str[i] != '\0')
	{
		if( (str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm') )
			str[i] += 13;
		else if( (str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z') )
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}
