/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:56:32 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/22 15:37:15 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, str);
	if (str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '%')
		{
			count += check_type(str[i + 1], args);
			i += 2;
		}
		else if (str[i] == '%' && str[i + 1] == '\0')
			return (-1);
		else
			count += ft_put_char(str[i++]);
	}
	va_end(args);
	return (count);
}
