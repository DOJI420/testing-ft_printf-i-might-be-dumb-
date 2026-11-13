/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:27:19 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/13 22:36:49 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

void        ft_print_nbr(int n);
int         ft_print_char(char c);
int         ft_print_ptr(void *ptr);
size_t      ft_print_str(char *str);
void        ft_process(const char *format);
int         ft_printf(const char *format, ...);
int         ft_print_hexa(unsigned int  num, char format);

#endif
