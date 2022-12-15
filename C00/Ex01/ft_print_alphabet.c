/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:53:42 by btomlins          #+#    #+#             */
/*   Updated: 2022/11/29 15:00:49 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Defines char as c and defines c as 'a'
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

//Main calls the ft_print_alphabet function
/*
int	main()
{
	ft_print_alphabet();
	return	(0);
}
*/
