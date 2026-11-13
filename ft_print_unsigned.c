/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:02:53 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 09:51:14 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_print_unsigned(unsigned int num)
{
    char    arr[10];
    int     printed;            
    int     count;
 
    count = 0;
    printed = 0;
    if (num == 0)
    {
        arr[count] = '0';
        count++;
    }
    while (num > 0)
    {
        arr[count] = num % 10 + '0';
        num = num / 10;
        count++;
    }
    while (count != 0)
    {
        ft_print_char(arr[count - 1]);
        count--;
        printed++;
    }
    return (printed);
}
