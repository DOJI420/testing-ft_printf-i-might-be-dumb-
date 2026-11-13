/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:03:04 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 14:26:33 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int isptr_null(void *ptr ,int printed)
{
    if (ptr == NULL)
    {
        write(1, "(nil)", 5);
        printed = 5;
        return (printed);
    }
}

void converting(size_t convert, char arr[18], int count)
{
    char    *base;
    
    base = "0123456789abcdef";
    while (convert > 0)
    {
        arr[count++] = base[convert % 16];
        convert = convert / 16;
    }    
}

int ft_print_ptr(void *ptr)
{
    char    arr[18];
    int     printed;
    int     count;
    size_t  convert;

    count = 0;
    isptr_null(ptr, printed);
    convert = (size_t)ptr;
    if (convert == 0)
        arr[count++] = '0';
    converting(convert, arr[18], count);
    arr[count++] = 'x';
    arr[count++] = '0';
    while (count > 0)
        printed = printed + ft_print_char(arr[--count]);
    return (printed);
}

int main(void)
{
    int     a = 42;
    char    b = 'A';
    int     arr[5] = {1, 2, 3, 4, 5};
    void    *ptr = &a;

    printf("Test 1:  Expected: %-20p | Mine: ", NULL);
    ft_print_ptr(NULL);
    printf("\n");

    printf("Test 2:  Expected: %-20p | Mine: ", (void *)&a);
    ft_print_ptr(&a);
    printf("\n");

    printf("Test 3:  Expected: %-20p | Mine: ", (void *)&b);
    ft_print_ptr(&b);
    printf("\n");

    printf("Test 4:  Expected: %-20p | Mine: ", (void *)arr);
    ft_print_ptr(arr);
    printf("\n");

    printf("Test 5:  Expected: %-20p | Mine: ", (void *)&arr[0]);
    ft_print_ptr(&arr[0]);
    printf("\n");

    printf("Test 6:  Expected: %-20p | Mine: ", (void *)&arr[4]);
    ft_print_ptr(&arr[4]);
    printf("\n");
}