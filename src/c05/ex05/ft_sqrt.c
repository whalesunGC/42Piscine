/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:10:57 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/10 22:10:58 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_froot(int nb, int x, int count)
{
	int	result;

	result = nb - x;
	count++;
	if (result == 0)
		return (count);
	else if (result < 0)
		return (0);
	return (ft_froot(result, (x + 2), count));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		return (0);
	return (ft_froot(nb, 1, 0));
}
