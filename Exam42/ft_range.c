/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:06:26 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:07:25 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	p = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

#include <stdio.h>
int main()
{
	int *src = ft_range(1, 6);
	printf("%d %d %d %d %d",src[0], src[1], src[2], src[3], src[4]);

}
