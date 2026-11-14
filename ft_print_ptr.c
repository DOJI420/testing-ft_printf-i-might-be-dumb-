/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:03:04 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 13:11:07 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	isptr_null(void *ptr, int printed)
{
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		printed = 5;
	}
	return (printed);
}

static int	converting(size_t convert, char arr[], int count)
{
	char	*base;

	base = "0123456789abcdef";
	while (convert > 0)
	{
		arr[count++] = base[convert % 16];
		convert = convert / 16;
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	char	arr[18];
	int		printed;
	int		count;
	size_t	convert;

	count = 0;
	printed = 0;
	if (ptr == NULL)
		return (isptr_null(ptr, printed));
	convert = (size_t)ptr;
	if (convert == 0)
		arr[count++] = '0';
	count = converting(convert, arr, count);
	arr[count++] = 'x';
	arr[count++] = '0';
	while (count > 0)
		printed = printed + ft_print_char(arr[--count]);
	return (printed);
}
