/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:18:43 by wichee            #+#    #+#             */
/*   Updated: 2024/03/21 01:08:22 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	unsigned int	size_src;
	char			*cpy_str;
	char			*cpy_ptr;

	size_src = ft_strlen(src);
	cpy_str = (char *)malloc(size_src + sizeof(char));
	if (cpy_str == NULL)
		return (NULL);
	cpy_ptr = cpy_str;
	while (*src != '\0')
	{
		*cpy_ptr = *src;
		cpy_ptr++;
		src++;
	}
	*cpy_ptr = '\0';
	return (cpy_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
