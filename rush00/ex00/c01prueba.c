/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01prueba.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:05:31 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/04 15:07:08 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_ft(int *nbr)
{
    int c;
    int n1;
    int n2;
    char l1;
    char l2;
    
    *nbr = 42;
    n1 = *nbr / 10;
    l1 = n1 + '0';
    n2 = *nbr % 10;
    l2 = n2 + '0';
    ft_putchar(l1);
    ft_putchar(l2);
}

int main(void)
{
    int a;

    ft_ft(&a);
    return (0);
}
