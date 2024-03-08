/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:53:36 by wichee            #+#    #+#             */
/*   Updated: 2024/03/08 11:58:32 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	 return (0);
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
