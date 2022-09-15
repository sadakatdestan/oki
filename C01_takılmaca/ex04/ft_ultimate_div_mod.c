/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:45:17 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/13 18:44:58 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int    div;
    int    mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main()
{
    int x;
    int y;

    x = 15;
    y = 3;
    ft_ultimate_div_mod(&x, &y);
    printf("%d %d", x, y);
}
