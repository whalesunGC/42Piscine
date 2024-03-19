/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 07:06:34 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/04 07:23:12 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cur;
	int	nex;
	int	val;

	nex = 1;
	while (nex < size)
	{
		val = tab[nex];
		cur = nex - 1;
		while (cur >= 0 && tab[cur] > val)
		{
			tab[cur + 1] = tab[cur];
			cur--;
		}
		tab[cur + 1] = val;
		nex++;
	}
}
