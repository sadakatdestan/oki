/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:59:44 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/03 13:16:28 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int b)
{
	char	a;

	if (b >= 0)
	{
		a = 'P';
		write(1, &a, 1);
	}
	else if (b < 0)
	{
		a = 'N';
		write(1, &a, 1);
	}
}
