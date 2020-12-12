/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:46:08 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/12 21:16:53 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int r;
	int k;
	int l;
	char *res;

	i = 0;
	r = 0;
	while (to_find[r] != '\0')
	{
		r++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			k = 0;
			l = 0;
			while (k <= r)
			{
				if (str[l] == to_find[k])
				{
					k++;
					l++;
				}
			}
			if (k == r)
				*res = str[i];
		}
		i++;
	}
	if (r == 0)
		return (0);
	else
		return (str);
}

//   If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; other-
//    wise a pointer to the first character of the first occurrence of needle is returned.
//  Devuelve en punto en que empieza la repetición
//  