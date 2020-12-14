/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:19:52 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/14 20:25:05 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int i[index];
	int p;

	i[0] = 0;
	i[1] = 1;
	p = 2;
	while (p <= index)
		i[p] = i[p - 1] + i[p - 2];
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(i[index]));
}
