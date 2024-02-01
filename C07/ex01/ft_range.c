/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:33:07 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 09:51:39 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = (max - min);
	range = (int *)malloc(sizeof(int) * size);
	if (!(range))
		return (NULL);
	while (i < size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*ret;

	min = -21;
	max = -10;
	i = 0;
	ret = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", ret[i]);
		i++;
	}
	return (0);
}
*/
