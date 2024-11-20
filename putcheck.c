/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:47:08 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/20 14:57:55 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_put_char(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		count += ft_put_decimal(va_arg(args, int));
	else if (c == 's')
		count += ft_put_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_put_ptr(va_arg(args, void *));
	else if (c == 'u')
		count += ft_put_u(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(c, va_arg(args, unsigned int));
	else
		count += ft_put_char(c);
	va_end(args);
	return (count);
}
