/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:23:23 by wichee            #+#    #+#             */
/*   Updated: 2024/03/06 16:55:42 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				delta;
	unsigned char	*str1;
	unsigned char	*str2;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	delta = *str1 - *str2;
	return (delta);
}
