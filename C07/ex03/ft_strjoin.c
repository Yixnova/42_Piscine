/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:57:02 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/11 19:18:15 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizeneeded(int size, char **strs, char *sep)
{
	int	u1;
	int	u2;
	int	j;
	int	i;

	j = 0;
	u1 = 0;
	u2 = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			i++;
		u1 += i;
		j++;
	}
	while (sep[u2])
		u2++;
	return (((u1 + u2 * (size - 1)) + 1));
}

void	strjoin2(int size, char **strs, char *sep, char *ans)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			ans[k] = strs[j][i];
			k++;
			i++;
		}
		i = 0;
		while (sep[i] && j != size - 1)
		{
			ans[k] = sep[i];
			k++;
			i++;
		}
		j++;
	}
	ans[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		anssize;

	anssize = sizeneeded(size, strs, sep);
	ans = (char *)malloc(sizeof(char) * anssize);
	strjoin2(size, strs, sep, ans);
	return (ans);
}
#include <stdio.h>
int main()
{
	char sep[]= ",";
	char *strs[4]= {"yigit","sahin","nerde","burda"};
	printf("%s", ft_strjoin(4,strs,sep));
}
