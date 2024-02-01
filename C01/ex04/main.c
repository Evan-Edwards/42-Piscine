/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 09:21:27 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:19:46 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	tempa;
	int	tempb;
	int	*a;
	int	*b;

	tempa = 5;
	tempb = 2;
	a = &tempa;
	b = &tempb;
	ft_ultimate_div_mod(a, b);
	printf ("%d\n", *a);
	printf("%d\n", *b);
	return (0);
}
