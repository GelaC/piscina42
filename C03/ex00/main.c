/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:06:34 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 12:24:01 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char lis1[] = "dfgfgsf";
	char lis2[] = "dfgfgsf";

	printf("%d\n", ft_strcmp(lis1, lis2));
	printf("%d bueno\n", strcmp(lis1, lis2));
	return (0);
}
