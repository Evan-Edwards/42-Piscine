/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:03:59 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/15 11:11:50 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	loop;
	int	i;
	int	temp;

	loop = 1;
	while (loop <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i +1];
				tab[i + 1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		loop++;
	}
}
