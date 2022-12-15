/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:47:25 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/05 10:26:01 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main (void)
{
	int num1;
	int num2;

	num1 = 15;
	num2 = 6;
	printf("Num1 = %d\nNum2 = %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Num1 div Num2 = %d\nNum1 mod Num2 = %d\n", num1, num2);
	return (0);
}
*/
