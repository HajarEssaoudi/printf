/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putprint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 23:47:05 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/20 14:57:50 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_put_decimal(int n)
{
	char	digit;
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
		count++;
	}
	if (num >= 10)
		count += ft_put_decimal(num / 10);
	digit = (num % 10) + '0';
	count += write(1, &digit, 1);
	return (count);
}

int	ft_put_u(unsigned int n)
{
	char	digit;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_put_decimal(n / 10);
	digit = (n % 10) + '0';
	count += write(1, &digit, 1);
	return (count);
}

int	ft_put_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_put_str("(null)"));
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}
