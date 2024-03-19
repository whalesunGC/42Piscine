/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.sg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:50:27 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/10 21:50:28 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_str(int i, int j, char *str, char *to_find)
{
	int	a;

	a = 0;
	while (str[i + a] == to_find[a])
	{
		if (a == (j - 1))
			return (1);
		else if (a < j)
			a++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int			i;
	int			j;
	char		*ptr;

	i = 0;
	j = 0;
	while (to_find[j])
	{
		j++;
	}
	if (j > 0)
	{
		while (str[i])
		{
			if (str[i] == to_find[0])
			{
				if (ft_check_str (i, j, str, to_find))
					return (ptr = &str[i]);
			}
			i++;
		}
	}
	else
		return (ptr = &str[0]);
	return (0);
}
