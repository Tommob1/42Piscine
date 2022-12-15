/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:38:06 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 14:39:08 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	result = ft_str_is_uppercase("kwjef");
	printf("String is: %d\n", result);

	result = ft_str_is_uppercase("OFJNWO");
	printf("String is: %d\n", result);

	result = ft_str_is_uppercase("BRAYDEN");
	printf("String is: %d\n", result);

	result = ft_str_is_uppercase("123");
	printf("String is: %d\n", result);

	return (0);
}
*/