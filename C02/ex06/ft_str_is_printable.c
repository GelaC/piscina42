/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 19:47:37 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/08 20:35:35 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int r;

	i = 0;
	r = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			r = 0;
		i++;
	}
	return (r);
}
