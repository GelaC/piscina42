/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   leer.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 16:28:36 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/12 18:21:37 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *cajita = (char*)malloc(sizeof(char) * 100);
	int fichero; 
	int i;

	i = 0;
	fichero = open("prueba.txt", O_RDONLY);
	if (read(fichero, cajita, 100) > 0)
		printf("%s \n", cajita);
	while (cajita[i] != '\0')
	{
		if (cajita[i] == 't' && cajita[i - 1] == 'g' && cajita[i + 1] == 'w')
			printf("%c%c%c", cajita[i], cajita[i + 1], cajita[i + 2]);
		i++;
	}
	close(fichero);
	free(cajita);
	return '0';
}