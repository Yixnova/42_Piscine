/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:06:01 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:06:01 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return(result * sign);
}