/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:42:03 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/14 10:06:14 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}

/*
int	main(void)
{
	int	i;

	i = ft_fibonacci(2);
	printf("Fibonacci sequence from indicated integer = %d", i);
	return (0);
}
*/