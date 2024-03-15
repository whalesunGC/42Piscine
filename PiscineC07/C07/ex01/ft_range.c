/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:00:19 by wichee            #+#    #+#             */
/*   Updated: 2024/03/15 10:53:35 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	entry;

	if (min > max)
		return (NULL);
	int_array = (int *)malloc((max - min + 1) * sizeof(int));
	if (int_array == NULL)
		return (NULL);
	i = 0;
	entry = min;
	while (entry <= max)
	{
		int_array[i] = entry;
		i++;
		entry++;
	}
	return (int_array);
}
