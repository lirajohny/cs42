/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:39:36 by jlira             #+#    #+#             */
/*   Updated: 2023/08/09 09:02:59 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs42.h"

float	ft_atoi(char *str)
{
	long	i;
	float	res;
    float   dot;
	float	sign;
    int j;

	i = 0;
	res = 0;
    dot = 0.0;
	sign = 1.0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10.00) + (str[i] - '0');
		i++;
	}
    if (str[i] == '.' || str[i] == ',')
    {
        i++;
    }
    j = 10;
    while (str[i] >= '0' && str[i] <= '9')
    {
        dot  = (str[i] - '0') / (float)j;  // Convertendo para float para evitar divisão inteira
        res = res + dot;
        j *= 10;
        i++;
    }
    return (res * sign);
}
