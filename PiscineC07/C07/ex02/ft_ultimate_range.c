/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:19:53 by wichee            #+#    #+#             */
/*   Updated: 2024/03/15 11:24:33 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	unsigned int	entry;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof (int));
	if (*range == NULL)
		return (-1);
	i = 0;
	entry = min;
	while (i < (max - min))
	{
		(*range)[i] = entry;
		entry++;
		i++;
	}
	return (i);
}
