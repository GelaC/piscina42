/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:36:34 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/01 18:18:07 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char final
	
	final = 'z';
	
	while (final >='a')
	{
		write(1, &final, 1);
		final--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
