/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:18:50 by wichee            #+#    #+#             */
/*   Updated: 2024/03/08 12:23:07 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
