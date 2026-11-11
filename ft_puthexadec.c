/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:44:06 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/11 23:11:25 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_puthexadec(unsigned int  nb)
{
    char    *s = "0123456789ABCDEF";
    int     i;
    int     len;

    i = 0;
    if (nb >= '0' && nb <= '9')
    {
        ft_putchar(nb);
        return ;
    }
    len = 0;
    if (nb >= 10)
    {
        while (nb != 0)
        {
            nb = nb % 16;
            
        }
    }
}