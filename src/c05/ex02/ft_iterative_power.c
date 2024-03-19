/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/10 22:10:43 by tlim-kuo		  #+#	#+#			 */
/*   Updated: 2024/03/14 20:52:11 by tlim-kuo         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (nb == 0 || power < 0)
	{
		return (0);
	}
	else
	{
		result = nb;
		while (power > 1)
		{
			result *= nb;
			power--;
		}
	}
	return (result);
}
