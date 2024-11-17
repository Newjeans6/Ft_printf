/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_function2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:31:14 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/17 16:56:02 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    parse_hex(unsigned int n)
{
    int	len;

    len = 0;
    if (n > 15)
        len += parse_hex(n / 16);
    if (n % 16 < 10)
        write(1, &n % 16 + '0', 1);
    else
        write(1, &n % 16 - 10 + 'a', 1);
    return (len + 1);
}
int   parse_hex_upper(unsigned int n)
{
    int	len;

    len = 0;
    if (n > 15)
        len += parse_hex_upper(n / 16);
    if (n % 16 < 10)
        write(1, &n % 16 + '0', 1);
    else
        write(1, &n % 16 - 10 + 'A', 1);
    return (len + 1);
}
int parse_percent(void)
{
    write(1, "%", 1);
    return (1);
}
