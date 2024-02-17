/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:19:21 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/01 13:19:21 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	unsigned int	dest_len;
	unsigned int	src_index;

	dest_len = 0;
	src_index = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
