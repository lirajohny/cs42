/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:53:29 by jlira             #+#    #+#             */
/*   Updated: 2023/08/09 11:53:20 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs42.h"

void	ft_print_nbr(int nb)
{
	int	last_digit;

	if (nb == 0)
		return ;
	last_digit = nb % 10;
	ft_print_nbr(nb / 10);
	last_digit = last_digit + '0';
	write(1, &last_digit, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			write(1, "2147483648", 10);
			return ;
		}
		ft_print_nbr(nbr * (-1));
	}
	else if (nbr == 0)
		write(1, "0", 1);
	else
		ft_print_nbr(nbr);
}
