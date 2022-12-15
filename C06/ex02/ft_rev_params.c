/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:49:56 by btomlins          #+#    #+#             */
/*   Updated: 2022/12/14 16:07:37 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	if (argc > 1)
	{
		argc--;
		while (argc >= a)
		{
			b = 0;
			while (argv[argc][b])
			{
				write(1, &argv[argc][b], 1);
				b++;
			}
			write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
