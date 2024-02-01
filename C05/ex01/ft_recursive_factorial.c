/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:44:54 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 08:39:00 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 3;
	printf("nb factorial = %d\n", ft_recursive_factorial(nb));
}
*/
