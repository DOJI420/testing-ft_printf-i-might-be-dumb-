/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:27:19 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/11 20:20:40 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

void        ft_putnbr(int n);
void        ft_putchar(char c);
size_t      ft_strlen(char *str);
int         ft_printf(const char *format, ...);

#endif
