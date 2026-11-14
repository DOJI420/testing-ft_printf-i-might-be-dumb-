/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:53:05 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 13:01:23 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	int	i;
	int	printed;

	printed = 0;
	i = 0;
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			ft_print_char(format[i++]);
			printed++;
		}
		if (format[i] == '%')
		{
			printed = printed + ft_processing(&format[i + 1], args);
			i = i + 2;
		}
	}
	return (printed);
}
