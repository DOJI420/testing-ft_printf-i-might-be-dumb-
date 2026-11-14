/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:24:20 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 13:21:41 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_processing(const char *format, va_list args)
{
	int	printed;

	printed = 0;
	if (*format == 's')
		printed = ft_print_str(va_arg(args, char *));
	else if (*format == 'x' || *format == 'X')
		printed = ft_print_hexa(va_arg(args, unsigned int), format);
	else if (*format == 'd' || *format == 'i')
		printed = ft_print_nbr(va_arg(args, int));
	else if (*format == 'p')
		printed = ft_print_ptr(va_arg(args, void *));
	else if (*format == 'c')
		printed = ft_print_char(va_arg(args, int));
	else if (*format == 'u')
		printed = ft_print_unsigned(va_arg(args, unsigned int));
	else if (*format == '%')
		printed = ft_print_char('%');
	return (printed);
}
