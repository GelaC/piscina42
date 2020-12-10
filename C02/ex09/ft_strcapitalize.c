/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acebrian <acebrian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 21:32:24 by acebrian          #+#    #+#             */
/*   Updated: 2020/12/10 18:40:44 by acebrian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (i == 0)
				str[i] = str[i] - 32;			
			else if (((!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')) || (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')) || (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') || (str[i + 1] >= 'a' && str[i + 1] <= 'z') || (str[i + 1] >= '0' && str[i + 1] <= '9'))
				//Si detrás va alfan y delante no
				str[i] = str[i] - 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
