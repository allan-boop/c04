/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:31:39 by ahans             #+#    #+#             */
/*   Updated: 2023/06/15 18:27:08 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	ret;
	int	minus;

	minus = 0;
	i = 0;
	ret = 0;
	while (str[i] == ' ' || str[i] == '+' || str[i] == '-' || \
			str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\f' || str[i] == '\r')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ((ret * 10) + (str[i] - '0'));
		i++;
	}
	if (((minus % 2) == 1))
	{
		ret = -ret;
	}
	return (ret);
}
/*
int main ()
{
	printf("%d", ft_atoi(" - - 577qa45"));
}
*/
