/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:50 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 17:36:37 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	src_size;

	i = 0;
	src_size = ft_strlen(src);
	while (i < n)
	{
		if (n > src_size)
		{
			if (i < src_size)
				dest[i] = src[i];
			else
				dest[i] = '\0';
			i++;
		}
		else
		{
			if (i == n - 1)
				dest[i] = '\0';
			else
				dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
