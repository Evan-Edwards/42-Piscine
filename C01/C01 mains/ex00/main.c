/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:40:14 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/12 09:57:27 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	a;

	a = 10;
	nbr = &a;
	printf("%i\n", a);
	ft_ft(nbr);
	printf("%i\n", a);
	return (0);
}
