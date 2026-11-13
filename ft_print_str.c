/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:16:07 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 08:39:44 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t    ft_print_str(char *str)
{
    size_t  len;

    len = 0;
    if (str == NULL)
        return (NULL);
    while (str && str[len] != '\0')
    {
        write(1, &str[len], 1);
        len++;
    }
    return (len);
}