/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:19:38 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/15 20:19:38 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    const char *str;
    
    str = format;

    while (*str)
    {
        if (*str == '%' && ((*str + 1) == 'd' || (*str + 1) == 'i'))
        {
            
        }
        
    }
    
}
