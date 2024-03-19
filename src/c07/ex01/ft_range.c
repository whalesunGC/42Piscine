/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:41:02 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/18 14:26:38 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*rrange;

	if (min >= max)
		return (NULL);
	size = max - min;
	rrange = (int *)malloc(sizeof(int) * size);
	if (rrange == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		rrange[i] = min;
		i++;
		min++;
	}
	return (rrange);
}
