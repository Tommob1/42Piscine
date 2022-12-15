/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:22:11 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/07 14:26:40 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	temp;
	int	b;

	i = 0;
	b = 0;
	temp = 0;
	while (s1[i] == s2 [i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char	str1[] = "STRING";
	char	str2[] = "string";
	printf("strcmp output: %d\n", ft_strcmp(str1, str2));
}
*/