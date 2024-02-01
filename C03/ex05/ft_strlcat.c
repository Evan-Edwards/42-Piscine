/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:44:03 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/20 10:34:55 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* size is size of the concatenate strings together, if size smaller than dest, return src size + size, otherwise return src + dest concatenated length*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (src[res])
		res++;
	while (dest[i])
		i ++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] && i + j < size -1)
	{
		dest[i + j] = src [j];
		j++;
	}
	dest [i + j] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	size;
	char			src[] = "World!";
	char			dest[] = "Hello ";

	size = 9;
	printf("Size of dest + src = %d\n", ft_strlcat(dest, src, size));
	printf("Dest is now = %s\n", dest);
}
*/
