/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:10:21 by wichee            #+#    #+#             */
/*   Updated: 2024/03/06 17:04:50 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	int				delta;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	while (*s1 && (*s1 == *s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	delta = *str1 - *str2;
	return (delta);
}
