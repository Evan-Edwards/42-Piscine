/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 08:59:28 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/24 08:45:54 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	p;

	i = 2;
	p = 1;
	if (nb <= 1)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			p = 0;
		i++;
	}
	if (p == 0)
		nb = ft_find_next_prime(nb + 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 90;
	printf("The next prime number after %d is %d\n", nb, ft_find_next_prime(nb));
}
*/
