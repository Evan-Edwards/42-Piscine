/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eedwards <eedwards@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:28:38 by eedwards          #+#    #+#             */
/*   Updated: 2024/01/22 11:28:38 by eedwards         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int count, long nb, char *base);
void	ft_putchar(char c);
void	ft_findbase(int nbr, char *base);
int		ft_strlen(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strlen(base) > 1)
	{
		ft_findbase(nbr, base);
	}
}

void	ft_findbase(int nbr, char *base)
{
	int		i;
	int		valid;
	int		count;
	long	nb;

	i = 0;
	count = 0;
	valid = 1;
	nb = (long)nbr;
	while (base[i])
	{
		if ((base[i] == base[i + 1]) || (base[i] == '+' || base[i] == '-'))
			valid = 0;
		if (base[i] >= 33 && base[i] <= 126)
			count ++;
		i++;
	}
	if (valid == 1)
		ft_putnbr(count, nb, base);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr(int count, long nb, char *base)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= count)
	{
		ft_putnbr(count, nb / count, base);
		ft_putnbr(count, nb % count, base);
	}
	else
		ft_putchar(base[nb]);
}
/*
int	main(void)
{
	int 	nbr;
	char	base[] = "0123456789";

	nbr = 100234;
	ft_putnbr_base(nbr, base);
}
*/
