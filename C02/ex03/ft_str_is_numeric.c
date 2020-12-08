/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:08:09 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/08 19:37:57 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;
	int r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] > '9' || str[i] < '0')
			r = 0;
		i++;
	}
	return (r);
}
