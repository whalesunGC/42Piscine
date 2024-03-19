/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:11:05 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/10 22:11:06 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_prime(int nb, int factor)
{
	while (factor < nb)
	{
		if (nb % factor == 0)
		{
			return (0);
		}
		factor++;
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb >= 2147483647)
		return (1);
	else if (nb > 2 && (nb % 2 == 0))
		return (0);
	else
		return (ft_check_prime(nb, 3));
}
