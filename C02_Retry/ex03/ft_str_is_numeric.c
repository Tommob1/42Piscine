/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:05:43 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 14:18:37 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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

	result = ft_str_is_numeric("61523");
	printf("String is: %d\n", result);

	result = ft_str_is_numeric("kwjef");
	printf("String is: %d\n", result);

	result = ft_str_is_numeric("Qiwbfc");
	printf("String is: %d\n", result);

	result = ft_str_is_numeric("bray1234");
	printf("String is: %d\n", result);

	result = ft_str_is_numeric("023");
	printf("String is: %d\n", result);

	return (0);
}
*/