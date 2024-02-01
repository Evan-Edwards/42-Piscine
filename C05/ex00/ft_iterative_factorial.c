/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:18:33 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 08:38:39 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int nb;

	nb = 4;
	printf("nb factorial = %d\n", ft_iterative_factorial(nb));
}
*/	
