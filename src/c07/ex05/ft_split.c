/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:42:45 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/18 14:27:36 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (!ft_is_charset(str[i], charset) && str[i])
				i++;
		}
	}
	return (count);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_add_word(char *str, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		word_len;

	result = (char **)malloc(sizeof(char *) * (ft_count(str, charset) + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (ft_is_charset(str[i], charset))
			i++;
		word_len = ft_len(str + i, charset);
		if (word_len)
		{
			result[j] = ft_add_word(str + i, word_len);
			j++;
		}
		i += word_len;
		word_len = 0;
	}
	result[j] = 0;
	return (result);
}
