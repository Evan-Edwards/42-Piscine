/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:57:20 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/17 13:03:19 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	int		i;

	str = "AbC";
	i = ft_str_is_uppercase(str);
	printf("%d\n", i);
}
*/
