/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 11:24:17 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 10:30:55 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	counter = 0;
	while (counter <= (size / 2))
	{
		temp = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = temp;
		counter++;
	}
}
