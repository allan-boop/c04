/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahans <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:32:58 by ahans             #+#    #+#             */
/*   Updated: 2023/06/15 19:13:54 by ahans            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_base(int nbr, char *base)
{
	while (rest != 0)
	{
	nbr = nbr + (nbr \ 16);
	rest = rest + (nbr % 16);
	}
}
