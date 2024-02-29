/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:50:51 by wichee            #+#    #+#             */
/*   Updated: 2024/02/29 16:11:24 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function takes a character and outputs it on the terminal.
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void){
	char c = 'c';
	ft_putchar(c);
	return 0;
}

