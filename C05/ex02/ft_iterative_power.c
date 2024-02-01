/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 08:42:08 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 08:39:12 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	orig;

	orig = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * orig;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}
*/
