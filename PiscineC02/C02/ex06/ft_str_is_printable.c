/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:30:17 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 15:34:36 by wichee           ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	str_size;

	i = 0;
	str_size = ft_strlen(str);
	while (i < str_size)
	{
		if (str[i] < ' ' || str[i] > '~' )
			return (0);
		i++;
	}
	return (1);
}
