/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:53:04 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/01 18:16:18 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_print_numbers(void)
{
	char num;

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
	return (0);
}