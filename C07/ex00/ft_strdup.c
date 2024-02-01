/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:34:25 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/30 10:08:22 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i])
		i++;
	cpy = (char *) malloc(sizeof(char) * i);
	if (!(cpy))
		return (NULL);
	return (ft_strcpy (cpy, src));
}
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Joeseph";

	printf("Copy of src string is : %s\n", ft_strdup(src));
}
*/
