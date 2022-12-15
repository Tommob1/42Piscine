/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 16:12:09 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/02 11:34:49 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;
	int	ptr_div;
	int	ptr_mod;

	num1 = 100;
	num2 = 30;
	ft_div_mod(num1, num2, &ptr_div, &ptr_mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", num1, num2, ptr_div, ptr_mod);
	return (0);
}
*/