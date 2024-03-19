/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:41:11 by wichee            #+#    #+#             */
/*   Updated: 2024/03/18 08:44:01 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_closest_sqroot(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
		i++;
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= ft_closest_sqroot(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	np;

	np = nb + 1;
	while (!ft_is_prime(np))
		np++;
	return (np);
}
