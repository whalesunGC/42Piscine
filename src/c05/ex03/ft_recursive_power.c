/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:10:48 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/14 20:52:55 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else if (power > 1)
	{
		power = power - 1;
		return (result * ft_recursive_power(nb, power));
	}
	else
	{
		return (result);
	}
}
