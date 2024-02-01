/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:49:52 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:16:59 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	int	*pdiv;
	int	*pmod;

	a = 5;
	b = 2;
	pmod = &mod;
	pdiv = &div;
	ft_div_mod(a, b, pdiv, pmod);
	printf("a divided by b equals: %d\n", div);
	printf("The remainder is: %d\n", mod);
}
