/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 09:51:38 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/05 09:51:38 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	minuses;
	int	number;

	minuses = 0;
	number = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			minuses++;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	if (!(minuses % 2))
		return (number);
	return (-number);
}
