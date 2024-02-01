/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:13:16 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/18 11:04:38 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*adds nb characters of src to the end of dest and adds a terminating '\0'*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
    {
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	nb;
	char			src[] = "World!";
	char			dest[] = "Hello ";

	nb = 10;
	printf("%s\n", ft_strncat(dest, src, nb));
}
*/
