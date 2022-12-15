/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:23:45 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 14:32:01 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	int	result;

	result = ft_str_is_lowercase("kwjef");
	printf("String is: %d\n", result);

	result = ft_str_is_lowercase("OFJNWO");
	printf("String is: %d\n", result);

	result = ft_str_is_lowercase("BRAYDEN");
	printf("String is: %d\n", result);

	result = ft_str_is_lowercase("123");
	printf("String is: %d\n", result);

	return (0);
}
*/