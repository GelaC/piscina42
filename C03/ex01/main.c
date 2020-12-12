/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:14:04 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 15:18:22 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char ls1[] = "";
	char ls2[] = "";
	unsigned int x;

	x = 6;
	printf("%d", ft_strncmp(ls1, ls2, x));
	return (0);
}