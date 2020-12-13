/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:08 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/13 19:45:42 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	r;
	unsigned int	k;
	unsigned int	l;

	i = 0;
	r = 0; // caracteres de to_find
	while (to_find[r] != '\0')
	{
		r++;
	}
	if (r == 0)
		return (str);
	else
	{
		while (str[i] != '\0' && k != 0)
		{
			if (str[i] == to_find[0])
			{
				k = 0;
				l = 0;
				while (k <= r)
				{
					if (str[i + k] == to_find[l])
					{
						k++;
						l++;
					}
				}
			}
			if (k == r)
			{
				r = 0;
			}
			else
				i++;
		}
		if (k == l && k != 0)
			return (&str[i]);
		else
			return (str);
	}
}


//   If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; other-
//    wise a pointer to the first character of the first occurrence of needle is returned.
//  Devuelve en punto en que empieza la repetición
//  