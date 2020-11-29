/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:20:27 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/28 10:32:03 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_print_alphabet(void)
{
    char primero;
    
    primero = 'a';

    while (primero <= 'z')
    {
        write(1, &primero, 1);
        primero++;
    }
}
int main(void)
{
    ft_print_alphabet();
}