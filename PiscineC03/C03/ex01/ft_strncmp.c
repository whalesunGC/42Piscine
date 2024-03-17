/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:10:21 by wichee            #+#    #+#             */
/*   Updated: 2024/03/17 14:25:23 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	delta;
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n)
	{
		i++;
	}
	if (i == n)
	{
		str1 = (unsigned char *)&s1[i - 1];
		str2 = (unsigned char *)&s2[i - 1];
	}
	else
	{
		str1 = (unsigned char *)&s1[i];
		str2 = (unsigned char *)&s2[i];
	}
	delta = *str1 - *str2;
	return (delta);
}
