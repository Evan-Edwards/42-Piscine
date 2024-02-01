/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:52:36 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/26 12:24:01 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * size);
	if (!(res))
		return (-1);
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	*range = res;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	min;
	int	max;

	min = 9;
	max = 18;
	if (ft_ultimate_range(&range, min, max) <= 0)
		printf("Inputs invalid");
	else
		printf("Size of range is: %d\n", ft_ultimate_range(&range, min, max));
}
*/
