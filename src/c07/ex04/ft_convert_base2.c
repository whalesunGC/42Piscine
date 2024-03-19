/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlim-kuo <tlim-kuo@student.42singapore.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:42:28 by tlim-kuo          #+#    #+#             */
/*   Updated: 2024/03/18 11:01:33 by tlim-kuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_digit(char s, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != s)
		n++;
	return (n);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && j < i)
		{
			if (base[i] == '+' || base[i] == '-'
				|| (base[i] >= '\t' && base[i] <= '\r')
				|| base[i] == base[j] || base[i] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;

	base_len = ft_check_base(base);
	if (base_len <= 1)
		return (0);
	sign = 1;
	result = 0;
	while (*str != 0 && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str != 0 && (ft_get_digit(*str, base) < base_len))
	{
		result = (result * base_len) + (ft_get_digit(*str, base));
		str++;
	}
	return (result * sign);
}
