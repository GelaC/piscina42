/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:39:43 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/12 21:56:58 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char lis[] = "salut, coMMent tu Vas ?a42mots quArante-deux;cinquante+et+un";

	ft_strcapitalize(lis);
	printf("%s", lis);
	return (0);
}
