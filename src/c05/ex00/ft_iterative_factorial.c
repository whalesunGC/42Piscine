/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:10:33 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/14 20:24:24 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb >= 0)
	{
		res = 1;
		while (nb > 1)
		{
			res *= nb;
			nb--;
		}
	}
	return (res);
}
