/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:19:56 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/18 11:19:26 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* locates string to_find in string str. If the whole of to_find is found print str starting at when it matches*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello I am Evan";
	char	to_find[] = "Ev1";

	printf("%s\n", ft_strstr(str, to_find));
}
*/
