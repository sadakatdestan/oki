/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dene_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:36:13 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/09 18:51:49 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

void	ft_destan(int a, int b)
{
	int	c;

	c = a;
	a = b;
	b = c;
}

int main()
{
	int x = 5;
	int y = 4;
	ft_swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	
	printf("**********************\n");

	x = 5;
	 y = 4;
	ft_destan(x,y);
	printf("x = %d, y = %d\n", x, y);
}










