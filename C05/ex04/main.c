/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:25:54 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/14 19:31:06 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int i;

	i = 5;
	printf("%d\n", ft_fibonacci(i));
	return (0);
}