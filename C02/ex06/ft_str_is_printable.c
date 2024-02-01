/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:08:55 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/17 13:10:44 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int		i;

	str = "Ab†®Cd";
	i = ft_str_is_printable(str);
	printf("%d\n", i);
}
*/
