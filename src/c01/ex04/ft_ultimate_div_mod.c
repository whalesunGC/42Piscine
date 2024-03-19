/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:49:50 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/04 06:52:15 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	idiv;
	int	imod;

	idiv = *a / *b;
	imod = *a % *b;
	a = &idiv;
	b = &imod;
}
