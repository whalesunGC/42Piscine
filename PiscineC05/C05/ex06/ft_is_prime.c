/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:54:44 by wichee            #+#    #+#             */
/*   Updated: 2024/03/18 08:39:17 by wichee           ###   ########.fr       */
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
