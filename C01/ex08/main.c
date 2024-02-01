/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:26:07 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 11:11:54 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	int array[6] = {7, 3, 6, 5, 9, 1};
	size = 6;
	tab = array;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}
	return (0);
}
