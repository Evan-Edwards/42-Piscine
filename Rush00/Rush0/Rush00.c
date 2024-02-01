/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:14:15 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/13 16:14:30 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush00(int x, int y)
{
	int	xx;
	int	yy;

	xx = 1;
	yy = 1;
	while (yy <= y)
	{
		while (xx <= x)
		{
			if ((xx == 1 || xx == x) && (yy == 1 || yy == y))
				ft_putchar('o');
			else if ((xx == 1 || xx == x) && !(yy == 1 || yy == y))
				ft_putchar('|');
			else if ((xx > 1 || xx < x) && (yy == 1 || yy == y))
				ft_putchar('-');
			else
				ft_putchar(' ');
			xx++;
		}
		yy ++;
		ft_putchar('\n');
		xx = 1;
	}
}
