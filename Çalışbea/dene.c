/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dene.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scelebi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:50:05 by scelebi           #+#    #+#             */
/*   Updated: 2022/09/09 17:32:45 by scelebi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{

	int a = 5, *ap;
	float b = 3.2, *bp;
	double c = 3.412, *cp;
	char d = 'a',*dp;

	int sayılar[5]= {1,2,3,4,5};

	int *arrayp;
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;

	arrayp = &sayılar[3];

	printf("%p  adresindeki intin degeri %d dir.\n" ,ap,*ap);
	
	printf("%p adresindeki floatin degeri %f dir.\n", bp,*bp);
	printf("%p adresindeki doublein degeri %lf dir.\n" ,cp,*cp);
	printf("%p adresindeki charin degeri %c dir.\n",dp,*dp);
	printf("%p adresindeki sayilarin elemaninin degeri %d dir.\n" ,arrayp,*arrayp);
}
