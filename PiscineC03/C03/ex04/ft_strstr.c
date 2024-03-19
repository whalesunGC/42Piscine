/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:43:18 by wichee            #+#    #+#             */
/*   Updated: 2024/03/18 14:58:32 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#ifndef NULL42
# define NULL42 (void *)0
#endif

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*index;

	i = 0;
	if (str == NULL42 || to_find == NULL42)
		return (NULL42);
	if (str[i] == '\0' && to_find[i] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
		{
			index = &str[i];
			return (index);
		}
		i++;
	}
	return (NULL42);
}
