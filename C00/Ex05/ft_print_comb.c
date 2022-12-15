/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:49:03 by btomlins          #+#    #+#             */
/*   Updated: 2022/11/29 15:59:04 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	printmessage(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				if (a != b && b != c)
				{
					printmessage (a, b, c);
				}
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a;
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return	(0);
}
*/
