/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:08:30 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/07 09:12:24 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	result[] = "OVWQKDKHB";
	char	result1[] = "HELLO";

	char	*ptr1;
	char	*ptr2;

	ptr1 = result;
	ptr2 = result1;
	printf("%s,", ft_strlowcase(ptr1));
	printf("%s,", ft_strlowcase(ptr2));
	return (0);
}
*/