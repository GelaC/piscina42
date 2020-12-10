/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:41:47 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 20:32:04 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || i == 0))
			str[i] = str[i] - 32;
		else
		
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}


