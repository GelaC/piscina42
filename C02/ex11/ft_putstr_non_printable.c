/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:12:31 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 13:20:05 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	int d;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '!' && str[i] > '~')
		{
			ft_putchar('92');
			// Hexadecimal cómo se ve?
			// str[i] / 16
			// str[i] % 16
			while (d < 16)
			{
				
			}


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
