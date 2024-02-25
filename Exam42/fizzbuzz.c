/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:05:56 by yigsahin          #+#    #+#             */
/*   Updated: 2024/02/25 17:05:56 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_printnumber(int nb)
{
    if (number > 9)
        ft_printnumber(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
    int nb;

    nb = 1;
    while (nb <= 100)
    {
        if (nb % 3 == 0 && nb % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if (nb % 3 == 0)
            write(1, "fizz", 4);
        else if (nb % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_printnumber(nb);
        write(1, "\n", 1);
        nb++; 
    }
}