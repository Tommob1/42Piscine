/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:41:41 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/12 14:11:11 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	sign = 1;
	i = 0;
	num = 0;
	while (str [i] != '\0')
	{
		if (str [i] == '-')
		{
			sign = sign * (-1);
		}
		if (str [i] >= '0' && str [i] <= '9')
		{
			num = (num * 10) + (str [i] - '0');
			if (str [i + 1] < '0' || str [i + 1] > '9')
				break ;
		}
		i++;
	}
	return (num * sign);
}

/*
int	main(void)
{
	int	in = ft_atoi("\n 827393784ubfw9fh3ubf9");

	printf("%d", in);
	return (0);
}
*/