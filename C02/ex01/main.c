/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:52:12 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 17:29:17 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char lis1[] = "aafgha";
	char lis2[] = "bbf";

	printf("%s", ft_strncpy(lis1, lis2, 5));
	return (0);
}