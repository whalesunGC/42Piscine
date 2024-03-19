/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapor      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:15:58 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/14 21:19:15 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *ch)
{
	int	len;

	len = 0;
	while (ch[len])
		len++;
	write(1, ch, len);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print(argv[0]);
}
