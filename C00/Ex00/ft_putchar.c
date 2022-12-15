/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btomlins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:56:49 by btomlins          #+#    #+#             */
/*   Updated: 2022/11/29 15:00:01 by btomlins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Includes library needed to write
#include <unistd.h>

//ft_putchar function
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//Tests ft_putchar function
/*
int	main()
{
	ft_putchar('a');
	return (0);
}*/
