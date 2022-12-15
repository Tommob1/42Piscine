/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:47:25 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/01 16:07:32 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	
	a = 0;
	b = 1;

	printf("a is %d\n", a);
	printf("b is %d\n", b);
	printf("Running ft_swap...\n");
	ft_swap(&a, &b);
	printf("a is now %d\n", a);
	printf("b is now %d\n", b);
	return (0);
}
*/
