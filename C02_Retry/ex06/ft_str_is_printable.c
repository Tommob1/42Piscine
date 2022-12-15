/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:50:39 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 15:24:00 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	int result;

	result = ft_str_is_printable("kwjef");
	printf("String is: %d\n", result);

	result = ft_str_is_printable(" ");
	printf("String is: %d\n", result);

	result = ft_str_is_printable("BRAYDEN");
	printf("String is: %d\n", result);

	result = ft_str_is_printable("~");
	printf("String is: %d\n", result);

	return (0);
}
*/