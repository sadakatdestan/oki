/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:52:09 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/13 14:21:50 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap ( char **a, char **b)
{

	char *random;
	random = *a;
	*a = *b;
	*b = random;
}

int main (int ac, char **av)
{
	if (ac == 3)
		ft_swap (&av[1] ,&av[2]);
	
	printf ("%s %s",av[1], av[2]);
	return (0);
	
}
