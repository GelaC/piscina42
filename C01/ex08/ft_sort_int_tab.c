/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:15:26 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/07 20:34:54 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int total;
	int p;
	int aux;

	total = 0;
	p = 0;

	while (total < size)
	{
		while (p < size - 1)
		{
			if (tab[p] > tab[p + 1])
			{
				aux = tab[p];
				tab[p] = tab[p + 1];
				tab[p + 1] = aux;
			}
			p++;
		}
		p = 0;
		total++;
	}
}
