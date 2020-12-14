/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 16:44:23 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/14 17:28:07 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb >= 0)
		n = nb * ft_recursive_factorial(nb - 1);
	return (n);
}
