/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:03:46 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:53:43 by wichee           ###   ########.fr       */
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

int	ft_charupper(char *str, int i)
{
	int	value_upper;

	value_upper = (str[i] >= 'A' && str[i] <= 'Z');
	return (value_upper);
}

int	ft_charlower(char *str, int i)
{
	int	value_lower;

	value_lower = (str[i] >= 'a' && str[i] <= 'z');
	return (value_lower);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_charupper(str, i) || !ft_charlower(str, i))
			return (0);
		i++;
	}
	return (1);
}
