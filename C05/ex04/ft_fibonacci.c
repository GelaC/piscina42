/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:19:52 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/15 13:18:30 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	char fb[index - 1];
	int p;

	fb[0] = '0';
	fb[1] = '1';
	p = 2;
	while (p < index)
	{
		fb[p] = fb[p - 1] + fb[p - 2];
		p++;
	}
	if (index < 0)
		return (-1);
	else
		return (ft_fibonacci(fb[index - 1]) - '0');
}
