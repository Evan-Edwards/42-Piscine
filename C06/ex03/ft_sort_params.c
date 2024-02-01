/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 10:50:30 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/25 13:43:58 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write (1, str, ft_strlen(str));
}

int	ft_strcmp(char *s1, char *s2)
{
	int					i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_sort_params(int argc, char **argv)
{
	int		loop;
	int		i;
	char	*temp;

	loop = 1;
	while (loop <= argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		loop++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	ft_sort_params(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
	}
}
