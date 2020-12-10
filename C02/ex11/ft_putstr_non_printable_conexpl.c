/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:53:21 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/09 22:50:04 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//hexadecimal
/*
	base Decimal es 10
	base octal es 8
	base binaria 2
	base HEX es 16  -> 0123456789BACDEF
	1
	\01
	Decimal 25  = HEX 019
	DECIMA 43 = HEX 02B

	0 = 0
	1 = 1
	2 = 2
	3 = 3
	4 = 4 
	5 = 5 
	6 = 6 
	7 = 7
	8 = 8
	9 = 9
	10 = a
	11 = b
	12 = c
	13 = d
	14 = e
	15 = f

	 DECIMA 25

	 85 / 16 = 5 
	 26 % 16 = 23 / 16 = 
	 			23 % 16 = 0

	55
	1A

	16

*/

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 33 && str[i] < 47) ||
		(str[i] > 58 && str[i] < 64) ||
		(str[i] > 91 && str[i] < 'Z') ||
		(str[i] > 123 && str[i] < 126))
		{
			ft_putchar(92);
			ft_putchar(str[i + 1] - 'a'-'A');
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(void)
{
	char lis[22] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(lis);
	return (0);
}
