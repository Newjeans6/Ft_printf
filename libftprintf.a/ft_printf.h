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

# include <unistd.h>
# include <stdarg.h>

int     ft_printf(const char *format, ...);

int     parse_char(char c);
int     parse_string(char *str);
int     parse_int(int n);
int     parse_unsigned(unsigned int n);
int     parse_hex(unsigned int n);
int     parse_hex_upper(unsigned int n);
int     parse_pointer(void *ptr);
int     parse_percent(void);
int     ft_strlen(char *str);
int     parse_format(const char **format, va_list args);

#endif
