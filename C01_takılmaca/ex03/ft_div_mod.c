/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:10:48 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/13 16:39:30 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0) 
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	 main() 
{
	int a;
	int b;
	int *div = &a;
	int *mod = &b;

	a = 15;
	b = 3;

	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d", *mod);
	return (0);
}
