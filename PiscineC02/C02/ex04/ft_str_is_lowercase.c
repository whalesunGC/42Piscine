/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:27:41 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 15:28:18 by wichee           ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	str_size;

	i = 0;
	str_size = ft_strlen(str);
	while (i < str_size)
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
