/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:41:54 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/18 10:59:23 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_total_length(char **strs, int size, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	return (total_len - sep_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*copy_from_strs(int size, char **strs, char *sep, char *result)
{
	int		i;
	char	*temp;

	i = 0;
	temp = result;
	while (i < size)
	{
		ft_strcpy(temp, strs[i]);
		temp += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		i++;
	}
	*temp = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;

	if (size == 0)
	{
		result = ((char *)malloc(sizeof(char)));
		if (result)
			*result = '\0';
		return (result);
	}
	total_len = ft_total_length(strs, size, ft_strlen(sep));
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	result = copy_from_strs(size, strs, sep, result);
	return (result);
}
