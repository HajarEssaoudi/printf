/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_adress.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:21:54 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/22 15:44:39 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(char c, unsigned int num)
{
	const char	*base_s = "0123456789abcdef";
	const char	*base_upp = "0123456789ABCDEF";
	int			count;

	count = 0;
	if (num >= 16)
		count += ft_print_hex(c, num / 16);
	if (c == 'x')
		count += ft_put_char(base_s[num % 16]);
	else if (c == 'X')
		count += ft_put_char(base_upp[num % 16]);
	return (count);
}

int	ft_print_ptr(unsigned long num)
{
	const char	*base = "0123456789abcdef";
	int			count;

	count = 0;
	if (num >= 16)
		count += ft_print_ptr(num / 16);
	count += ft_put_char(base[num % 16]);
	return (count);
}

int	ft_put_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_put_str("(nil)"));
	count += ft_put_str("0x");
	count += ft_print_ptr((unsigned long)ptr);
	return (count);
}
