/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:59:19 by jlira             #+#    #+#             */
/*   Updated: 2023/08/28 16:59:21 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "cs42.h"

int	is_prime(int nbr);

int	main(void)
{
	int	max;
	int	min;

	min = 0;
	max = 0;
	while (min < 1)
		min = get_int("MINIMUN: ");
	while (max <= min)
		max = get_int("MAXIMUM: ");
	while (min < max)
	{
		if (is_prime(min))
		{
			ft_putnbr(min);
			ft_putchar('\n');
		}
		min++;
	}
	return (0);
}

int	is_prime(int nbr)
{
	int	factors;
	int	i;

	i = 2;
	factors = 0;
	while (i <= nbr)
	{
		if	(nbr % i == 0)
		{
			factors++;
		}
		i++;
	}
	if (factors != 1)
		return (0);
	else
		return (1);
}
