/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:27:19 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 11:57:39 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int     ft_print_nbr(int n);
int     ft_print_char(char c);
int     ft_print_ptr(void *ptr);
int     ft_print_str(char *str);
int     ft_print_unsigned(unsigned int num);
int     ft_print_hexa(unsigned int  num, const char *format);

int     ft_format(const char *format, va_list args);
int     ft_processing(const char *format, va_list args);

int     ft_printf(const char *format, ...);

#endif
