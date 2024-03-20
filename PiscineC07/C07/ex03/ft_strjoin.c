/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 21:44:19 by wichee            #+#    #+#             */
/*   Updated: 2024/03/20 17:09:05 by wichee           ###   ########.fr       */
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

int	ft_trans_size(char **strs, int size, int sep_len)
{
	int	trans_size;
	int	i;

	trans_size = 0;
	i = 0;
	while (i < size)
	{
		trans_size += ft_strlen(strs[i]) + sep_len;
		i++;
	}
	return (trans_size - sep_len);
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

void	ft_joinstr(int size, char **strs, char *sep, char *strjoin)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(strjoin, strs[i]);
		strjoin += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(strjoin, sep);
			strjoin += ft_strlen(sep);
		}
		i++;
	}
	*strjoin = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		trans_size;

	if (size == 0)
	{
		strjoin = (char *)malloc(sizeof(char));
		strjoin[0] = '\0';
		return (strjoin);
	}
	trans_size = ft_trans_size(strs, size, ft_strlen(sep));
	strjoin = (char *)malloc(sizeof(char) * (trans_size + 1));
	if (strjoin == NULL)
		return (NULL);
	ft_joinstr(size, strs, sep, strjoin);
	return (strjoin);
}
/*#include <stdio.h>
int main() {
    // Test Case 1: Non-empty strings with a separator
    char *strings1[] = {"apple", "banana", "orange"};
    char *separator1 = ",!@#$%^&`";
    char *result1 = ft_strjoin(3, strings1, separator1);
    printf("Result 1: %s\n", result1);
    free(result1);

    // Test Case 2: Single string
    char *strings2[] = {"Hello"};
    char *separator2 = "-";
    char *result2 = ft_strjoin(1, strings2, separator2);
    printf("Result 2: %s\n", result2);
    free(result2);

    // Test Case 3: Empty strings
    char *strings3[] = {""};
    char *separator3 = "_";
    char *result3 = ft_strjoin(1, strings3, separator3);
    printf("Result 3: %s\n", result3);
    free(result3);

    return 0;
}*/
