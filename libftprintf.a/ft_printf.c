/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:19:38 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/17 16:47:05 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	if (format == NULL)
		return (0);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += parse_format(&format, args);
		}
		else
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
int	parse_format(const char **format, va_list args)
{
	if (**format == 'c')
		parse_char(args);
	else if (**format == 's')
		parse_string(args);
	else if (**format == 'd' || **format == 'i')
		parse_int(args);
	else if (**format == 'u')
		parse_unsigned(args);
	else if (**format == 'x')
		parse_hex(args);
	else if (**format == 'X')
		parse_hex_upper(args);
	else if (**format == 'p')
		parse_pointer(args);
	else if (**format == '%')
		parse_percent();
	else
		return (0);
	return (1);
}
int	main(void)
{
	ft_printf("Hello %d\n", 42);
	return (0);
}
