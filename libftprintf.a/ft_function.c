/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:21:52 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/17 16:58:06 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_char(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	parse_string(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
int	parse_int(int n)
{
	int	len;

	len = 0;
    if (n ==  -2147483648)
    {
        write(1, "-2147483648", 11);
        return (11);
    }
	if (n < 0)
	{
		write(1, "-", 1);
		len++;
		n = -n;
	}
	if (n > 9)
		len += parse_int(n / 10);
	write(1, &n % 10 + '0', 1);
	return (len);
}
int	parse_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += parse_unsigned(n / 10);
	write(1, &n % 10 + '0', 1);
	return (len);
}
