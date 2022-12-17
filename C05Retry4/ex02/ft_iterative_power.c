/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:03:55 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/15 12:03:26 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	i = 0;
	j = nb;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		while (i <= power)
		{
			j = j * nb;
			i++;
		}
	}
	return ((j / nb) / nb);
}

/*
int	main(void)
{
	int	a;

	a = ft_iterative_power(0, 0);
	printf("Result = %d", a);
	return (0);
}
*/
