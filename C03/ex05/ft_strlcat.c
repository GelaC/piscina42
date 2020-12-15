/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 21:10:47 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 18:39:00 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size && dest[i] != '\0')
			i++;
		if (dest[i] != '\0' && i == size)
			while (dest[i] != '\0')
				i++;
		while ((i + j) < size && src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		while (src[j] != '\0' && i == size)
			j++;
		i++;
		dest[i] = '\0';
	}
	return (i + j);
}
