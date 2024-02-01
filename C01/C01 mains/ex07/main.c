/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:26:07 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:30:52 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	int array[6] = {1, 3, 5, 7, 9, 11};
	size = 6;
	tab = array;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}
	return (0);
}
