/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:06:34 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 14:12:27 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char lis1[] = "dfgfgsf";
	char lis2[] = "fstydfghdfgsr";

	printf("%d", ft_strcmp(lis1, lis2));
	return (0);
}
