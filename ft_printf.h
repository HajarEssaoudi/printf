/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-saou <hes-saou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:58:32 by hes-saou          #+#    #+#             */
/*   Updated: 2024/11/20 14:59:15 by hes-saou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_put_char(int c);
int	ft_put_decimal(int n);
int	ft_put_u(unsigned int n);
int	ft_put_str(char *s);
int	ft_put_ptr(void *ptr);
int	ft_print_hex(char str, unsigned int num);
int	ft_print_ptr(unsigned long num);
int	check_type(char c, va_list args);
#endif