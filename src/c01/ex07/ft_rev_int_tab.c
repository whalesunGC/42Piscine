/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:59:58 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/04 07:06:13 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	val;

	index = 0;
	val = 0;
	while (index < (size / 2))
	{
		val = tab[index];
		tab[index] = tab[(size - 1 - index)];
		tab[(size - 1 - index)] = val;
		index++;
	}
}
