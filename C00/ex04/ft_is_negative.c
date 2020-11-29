/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 10:59:30 by acebrian          #+#    #+#             */
/*   Updated: 2020/11/28 11:22:47 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    char neg, pos;

    neg = 'N';
    pos = 'P';

        if(n >= 0)
        {
            write(1, &pos, 1);
        }

        else
        {
            write(1, &neg, 1);
        }
}
int main(void)
{
    int n;
    n = -7;
    ft_is_negative(n);
}
