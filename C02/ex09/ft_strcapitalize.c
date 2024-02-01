/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:12:57 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/17 15:27:31 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (new_word == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (new_word == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z')
			&& (str[i] < '0' || str[i] > '9'))
		{
			new_word = 1;
		}
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "SaLut, coMment tu vas ? 42Mots quarante-deux; cinquante+et";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
*/
