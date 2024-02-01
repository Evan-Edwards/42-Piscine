/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:32:59 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 14:56:09 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && nb > 0 && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 10;
	if (ft_sqrt(nb) == 0)
		printf("There is no rational square root of %d\n", nb);
	else
		printf("The square root of %d is %d\n", nb, ft_sqrt(nb));
}
*/
