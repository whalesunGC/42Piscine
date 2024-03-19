/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:08:17 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/15 02:08:19 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *ch)
{
	int	p;

	p = 0;
	while (ch[p])
		p++;
	write(1, ch, p);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = (argc - 1);
		while (i > 0)
		{
			ft_print(argv[i]);
			i--;
		}
	}
}
