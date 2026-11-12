/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:16:07 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/12 17:02:32 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t    ft_putstr(char *str)
{
    size_t  len;

    i = 0;
    if (str == NULL)
        return (NULL);
    while (str && str[len] != '\0')
    {
        write(1, &str[len], 1);
        i++;
    }
    return (len);
}