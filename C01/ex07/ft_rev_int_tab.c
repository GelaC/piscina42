/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 17:37:33 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/07 18:44:16 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tab2[size];
	int i;
	int n;

	i = 0;
	n = size;
	while (n > 0)
	{
		tab2[i] = tab[n - 1];
		n--;
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
}
