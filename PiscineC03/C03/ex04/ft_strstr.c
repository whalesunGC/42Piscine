/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:43:18 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 15:40:05 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*index;

	void *NULL;
	i = 0;
	NULL = (void *)0;
	if (str == NULL || to_find == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' || to_find[j] == str[i + j])
			j++;
		if (to_find[j] == '\0')
		{
			index = &str[(i - j -1)];
			return (index);
		}
		i++;
	}
	return (NULL);
}
