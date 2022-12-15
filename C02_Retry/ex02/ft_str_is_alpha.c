/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:58 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 13:16:16 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

	result = ft_str_is_alpha("kwjef");
	printf("String is: %d\n", result);

	result = ft_str_is_alpha("Qiwbfc");
	printf("String is: %d\n", result);

	result = ft_str_is_alpha("bray1234");
	printf("String is: %d\n", result);

	result = ft_str_is_alpha("123");
	printf("String is: %d\n", result);

	result = ft_str_is_alpha("");
	printf("String is: %d\n", result);

	return (0);
}
*/