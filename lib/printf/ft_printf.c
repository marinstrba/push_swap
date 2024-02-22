/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:24:00 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 12:30:00 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
 In this function i initialize the arguments,
 which i will then later print
*/

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			char_sum;

	va_start(args, format);
	char_sum = ft_print_str(format, args);
	va_end(args);
	return (char_sum);
}

/*
 This is how the code works:

 1. It starts in ft_printf(). In this function initaliazes
 the args.
 Then it calls the printf_str() function.

 2. The printf_str() prints the characters,
 until the encounters the '%' sign.
 If it encounters the '%' sign it will call
 the ft_print_format() function.

 3. In the ft_print_format function I want to check
 if the "%format" is the same as args in the same place.
 I want to achieve this by calling the ft_correct_format()
 function.

 4. I will then check if the format and args is correct
 and then print it to the console.

 5. I have function that will handle different formats and
 print it out to the console.
 etc.
*/