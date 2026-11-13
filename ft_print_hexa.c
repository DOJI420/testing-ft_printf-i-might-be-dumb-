/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:44:06 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 11:43:49 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hexa(unsigned int  num, char format)
{
    char    *base;
    char    arr[11];
    int     count;
    int     printed;

    printed = 0;
    count = 0;
    if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
    if (num == 0)
        arr[count++] = base[0];
    while (num > 0)
    {
        arr[count++] = base[num % 16];
        num = num / 16;
    }
    while (count > 0)
        printed = printed + ft_print_char(arr[--count]);
    return (printed);
}
