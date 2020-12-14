/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:30:11 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/14 17:48:33 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;
	int i;

	i = 0;
	n = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		n = nb * n;
		power--;
	}
	return (n);
}
