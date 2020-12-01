/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:20:27 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/01 17:38:56 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char primero;
	primero = 'a';
	while (primero <= 'z')
	{
		ft_putchar(primero);
		primero++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
