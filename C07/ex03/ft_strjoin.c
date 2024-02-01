/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:51:40 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/30 13:37:17 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_createstr(int size, char **strs, char *sep)
{
	int		i;
	int		sze;
	char	*res;

	i = 0;
	sze = 0;
	if (size == 0)
	{
		res = (char *) malloc(0);
		return (res);
	}
	while (i < size)
	{
		sze += ft_strlen(strs[i]);
		i++;
	}
	sze += ft_strlen(sep) * (size - 1);
	res = (char *)malloc(sizeof(char) * sze + 1);
	if (!(res))
		res = NULL;
	res[0] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	res = ft_createstr(size, strs, sep);
	if (res == NULL)
		return (res);
	i = 0;
	while (i < size)
	{
		res = ft_strcat(res, strs[i]);
		if (i < size - 1)
			res = ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[3];

	strs[0] = "Hello ";
	strs[1] = "world! ";
	strs[2] = "Hello?";
	printf("%s\n", ft_strjoin(3, strs, "crazy "));
	return (0);
}
*/
