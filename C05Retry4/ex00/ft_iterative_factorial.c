/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:03:11 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/15 11:01:26 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = 0;
	r = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (i < nb)
	{
		i++;
		r = r * i;
	}
	return (r);
}

/*
int	main(void)
{
	int	a;

	a = ft_iterative_factorial(0);
	printf("'a' factorial = %d\n", a);
	return (0);
}
*/
