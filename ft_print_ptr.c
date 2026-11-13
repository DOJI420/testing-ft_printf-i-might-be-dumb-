/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:03:04 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 22:25:26 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int isptr_null(void *ptr ,int printed)
{
    if (ptr == NULL)
    {
        if (ptr == NULL)
            return (write(1, "(nil)", 5));
    }
}

static int converting(size_t convert, char arr[], int count)
{
    char    *base;
    
    base = "0123456789abcdef";
    while (convert > 0)
    {
        arr[count++] = base[convert % 16];
        convert = convert / 16;
    }
    return (count);
}

int ft_print_ptr(void *ptr)
{
    char    arr[18];
    int     printed;
    int     count;
    size_t  convert;

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

#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int		a = 42;
	char	b = 'A';
	int		arr[5] = {1, 2, 3, 4, 5};
	char	*str = "Hello";
	void	*heap = malloc(10);
	int		ret;

	setbuf(stdout, NULL);

	ret = ft_print_ptr(NULL);
	printf(" | %d\n%p | 5\n-------------\n", ret, NULL);

	ret = ft_print_ptr((void *)0);
	printf(" | %d\n%p | 5\n-------------\n", ret, (void *)0);

	ret = ft_print_ptr((void *)1);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)1);

	ret = ft_print_ptr((void *)9);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)9);

	ret = ft_print_ptr((void *)10);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)10);

	ret = ft_print_ptr((void *)15);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)15);

	ret = ft_print_ptr((void *)16);
	printf(" | %d\n%p | 4\n-------------\n", ret, (void *)16);

	ret = ft_print_ptr((void *)255);
	printf(" | %d\n%p | 4\n-------------\n", ret, (void *)255);

	ret = ft_print_ptr((void *)4096);
	printf(" | %d\n%p | 6\n-------------\n", ret, (void *)4096);

	ret = ft_print_ptr((void *)-1);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)-1);

	ret = ft_print_ptr((void *)LONG_MAX);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)LONG_MAX);

	ret = ft_print_ptr((void *)LONG_MIN);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)LONG_MIN);

	ret = ft_print_ptr((void *)INT_MAX);
	printf(" | %d\n%p | 10\n-------------\n", ret, (void *)INT_MAX);

	ret = ft_print_ptr((void *)INT_MIN);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)INT_MIN);

	ret = ft_print_ptr(&a);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&a);

	ret = ft_print_ptr(&b);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&b);

	ret = ft_print_ptr(arr);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)arr);

	ret = ft_print_ptr(&arr[4]);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&arr[4]);

	ret = ft_print_ptr(str);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)str);

	ret = ft_print_ptr(heap);
	printf(" | %d\n%p | 14\n-------------\n", ret, heap);

	free(heap);
	return (0);
}
