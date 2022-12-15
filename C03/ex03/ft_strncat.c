/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:32:55 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/08 16:26:47 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest [a] != '\0')
		a++;
	while ((src [b] != '\0') && (b < nb))
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char string1[50] = "Test1";
	char string2[50] = "Test2";
	printf("%s\n", ft_strncat(string1, string2, 5));
	return (0);
}
*/
