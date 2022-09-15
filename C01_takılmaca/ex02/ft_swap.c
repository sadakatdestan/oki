/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:32:12 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/13 14:57:00 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	random;
	
	random = *a;
	*a = *b;
	*b = random;
}

int main (void)
{
    int tmp;
	int ff;
	int aa;

	ff = 20;
	aa = 45;
    
	ft_swap (&ff,&aa);
	printf("%d %d", ff, aa);
	return (0);
}
