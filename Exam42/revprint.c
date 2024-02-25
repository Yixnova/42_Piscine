/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:08:21 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:08:21 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}
char *ft_rev_print (char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return (str);
}
int main(){
    char a[] = "yigit resul sahin";
    ft_rev_print(a);
}