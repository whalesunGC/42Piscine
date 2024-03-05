/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:48:31 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 15:03:18 by wichee           ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
