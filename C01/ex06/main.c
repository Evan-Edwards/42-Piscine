/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:03:05 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:26:21 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*pstr;
	int		i;

	pstr = "hello";
	i = ft_strlen(pstr);
	printf("%d\n", i);
	return (0);
}
