/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:53:04 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/29 17:49:26 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char num;
	char

	num = '0';

	while (num <='9')
	{
		write(1, &num, 1);
		num++;
	}
}
int	main(void)
{
	ft_print_numbers();
}