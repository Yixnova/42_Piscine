/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:39:50 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/01 13:39:50 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] && a < size)
	{
		a++;
	}
	if (size <= a)
		return (a);
	while (src[b] && a <= size)
	{
		dest[a++] = src[b++];
	}
	dest[a] = '\0';
	return (a);
}
