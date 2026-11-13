/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:53:05 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 23:02:07 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void
{
    int i;

    i = 0;
    while (format[i] != '\0')
    {
        while (format[i] != '%')
            ft_print_char(format[i++]);
        if (format[i] == '%')
        {
            if (format[i + 1] == '%')
                ft_print_char(format[i + 1]);
        }
    }
}