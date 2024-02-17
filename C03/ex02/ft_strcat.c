/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:11:07 by yigsahin          #+#    #+#             */
/*   Updated: 2024/01/31 17:11:07 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	dest_len;
	int	src_index;

	src_index = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_index] != '\0')
	{
		dest[dest_len] = src[src_index];
		dest_len++;
		src_index++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
