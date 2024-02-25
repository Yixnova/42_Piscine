/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:07:56 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:07:57 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp	= str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}