/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:34:50 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/13 00:37:10 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(){
	char *src= "Hello Woqwekjfh	kwefghkı	jweghrfı	ghwerjkwegfku	gwehufkjuewgfkj	wefj	wegfuk	egwfj	wgefhku	gwefhj	wgefku	juegrwfkuku	rwgefkug	rkuwfgu	rffıl	hwelrıfhı	lehrwflı	hwerlıfh	lıerwfhlı	eghrwflıu	ghwerflıu	ghwerlıufh	leırwfh	lıerwghflı	herwfıl	hwerfılu	hwrfvrld!";
	char *copy;

	copy = ft_strdup(src);
	printf("%s\n", copy);,

	free(copy);
	return 0;
}
