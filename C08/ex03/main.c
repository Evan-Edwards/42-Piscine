/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:11:00 by eedwards          #+#    #+#             */
/*   Updated: 2024/02/01 11:49:40 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

#include <stdio.h>

int	main(void)
{
	t_point	point;

	set_point(&point);
	printf("X value is %d, Y Value is %d\n", point.x, point.y);
	return (0);


}
