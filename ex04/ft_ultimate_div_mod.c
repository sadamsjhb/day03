/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:25:07 by sadams            #+#    #+#             */
/*   Updated: 2020/06/21 12:58:35 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a;
	mod = *b;

	if(b != 0)
	{
		*a = div / mod;
		*b = div % mod;
	}
}

int main(void)
{
	int a = 15;
	int b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}
