/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:23:08 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/17 16:46:02 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
int ft_printf(const char *format, ...);
int parse_format(const char **format, va_list args);
void parse_char(va_list args);
void parse_string(va_list args);
void parse_int(va_list args);
void parse_unsigned(va_list args);
void parse_hex(va_list args);
void parse_hex_upper(va_list args);
void parse_pointer(va_list args);
void parse_percent(void);
void ft_putchar(char c);
void ft_putstr(char *str);
#endif
