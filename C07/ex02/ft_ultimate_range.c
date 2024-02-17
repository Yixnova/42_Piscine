/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:52:31 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/13 01:53:39 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * len);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i++] = min++;
	}
	return (len);
}
#include <stdio.h>
int main(){
	int min = 1;
	int max = 10;
	int *range;
	int len;

	len = ft_ultimate_range(&range,min,max);
	printf("%d", len);

	return 0;
}
