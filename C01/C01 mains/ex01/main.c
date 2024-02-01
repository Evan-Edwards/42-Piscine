/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:23:48 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:10:53 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********pnbr;
	int	********pnbr2;
	int	*******pnbr3;
	int	******pnbr4;
	int	*****pnbr5;
	int	****pnbr6;
	int	***pnbr7;
	int	**pnbr8;
	int	*pnbr9;
	int	nbr;

	nbr = 24;
	pnbr9 = &nbr;
	pnbr8 = &pnbr9;
	pnbr7 = &pnbr8;
	pnbr6 = &pnbr7;
	pnbr5 = &pnbr6;
	pnbr4 = &pnbr5;
	pnbr3 = &pnbr4;
	pnbr2 = &pnbr3;
	pnbr = &pnbr2;
	printf("%d\n", nbr);
	ft_ultimate_ft(pnbr);
	printf("%d\n", nbr);
}
