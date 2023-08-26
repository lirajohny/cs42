/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlira <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:33:41 by jlira             #+#    #+#             */
/*   Updated: 2023/08/01 14:19:10 by jlira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cs42.h"


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// this one is made specially fot the 42_gets functions, it requires a const char*, in all other functions I use char *
int	ft_slen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
