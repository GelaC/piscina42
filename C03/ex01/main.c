/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:14:04 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 20:13:59 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char test[] = "gggggg";
	char test2[] = "ggg";

	printf("%d\n", ft_strncmp(test, test2, 12));
	printf("bueno %d", strncmp(test, test2, 12));
	return (0);
}
