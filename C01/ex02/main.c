/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:28:50 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:12:16 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	ar;
	int	br;

	ar = 1;
	br = 2;
	a = &ar;
	b = &br;
	ft_swap(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
