/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:34:35 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/06 15:35:57 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	result[] = "kwjef";
	char	result1[] = "hello";

	char	*ptr1;
	char	*ptr2;

	ptr1 = result;
	ptr2 = result1;
	printf("%s,", ft_strupcase(ptr1));
	printf("%s,", ft_strupcase(ptr2));
	return (0);
}
*/