/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:20:55 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/08 19:26:33 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main(void)
{
	int a;
	int *p;

	a = 0;
	p = &a;
	ft_ft(p);

	printf("%d", a);


	return (0);
}




int		main(void)
{
	char lis1[] = "";

	printf("%d", ft_str_is_lowercase(lis1));
	return (0);
}



int	main()
{
	char l01[5] = "Hola";
	char l02[5];
	
	ft_strcpy(l02, l01);
	printf("%s", l02);
	return 0;
}