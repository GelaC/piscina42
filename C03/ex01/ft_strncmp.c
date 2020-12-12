/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 14:16:51 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 19:41:22 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	int				f;

	i = 0;
	j = 0;
	f = 0;
	while (s1[i] != '\0' && i <= n)
	{
		i++;
	}
	while (s2[j] != '\0' && j <= n)
	{
		j++;
	}
	f = i - j;
	return (f);
}
