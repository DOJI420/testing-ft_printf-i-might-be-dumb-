/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:51:32 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 09:42:06 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int count_n(int n)
{
    int count;

    count = 0;
    if (n == 0)
        count = 1;
    while (n != 0)
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
    }
    return (count);
}

int    ft_print_nbr(int n)
{
    int count;

    count = 0;
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
    if (n < 0)
    {
        count++;
        ft_print_char('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_print_nbr(n / 10);
        ft_print_nbr(n % 10);
    }
    else
        ft_print_char(n + '0');
    count = count + count_n(n);
    return (count);
}
