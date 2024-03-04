/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:31:30 by wichee            #+#    #+#             */
/*   Updated: 2024/03/04 10:46:20 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_maff_revalpha(void)
{
	int	i;
	int	c;
	int	n;

	i = 0;
	n = 10;
	while (i <= 25)
	{
		if (i % 2 == 0)
		{
			c = 122 - i;
			i++;
			write (1, &c, 1);
		}
		if (i % 2 == 1)
		{
			c = 90 - i;
			i++;
			write (1, &c, 1);
		}
	}
	write(1, &n, 1);
}

int	main(void)
{
	ft_maff_revalpha();
}
