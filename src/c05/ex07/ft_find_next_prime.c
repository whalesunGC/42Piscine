/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:11:12 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/14 20:46:01 by tlim-kuo         ###   ########.fr       */
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

int	ft_next_prime(int nb)
{
	int	is_prime;

	nb++;
	is_prime = 0;
	while (is_prime == 0)
	{
		if (nb % 2 == 0)
		{
			nb++;
		}
		else
		{
			is_prime = ft_check_prime(nb, 3);
			if (is_prime == 1)
				return (nb);
			nb++;
		}
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	else if (nb >= 2147483647)
		return (2147483647);
	else if (ft_check_prime(nb, 3))
		return (nb);
	return (ft_next_prime(nb));
}
