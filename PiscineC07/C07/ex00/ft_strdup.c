/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:00:45 by wichee            #+#    #+#             */
/*   Updated: 2024/03/20 15:57:26 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *src)
{
	unsigned int	len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	unsigned int	size_src;
	char			*cpy_str;
	char			*cpy_ptr;

	size_src = ft_len(src);
	cpy_str = (char *)malloc(size_src + sizeof(char));
	if (cpy_str == NULL)
		return (NULL);
	cpy_ptr = cpy_str;
	while (*src != '\0')
	{
		*cpy_ptr = *src;
		cpy_ptr++;
		src++;
	}
	*cpy_ptr = '\0';
	return (cpy_str);
}
/*#include <stdio.h>
int main(void)
{
    char original[] = "Hello, world!";
    char *duplicate;

    // Duplicate the string
    duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Memory allocation failed. Unable to duplicate string.\n");
        return 1;
    }

    // Print original and duplicated strings
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", duplicate);

    // Free the dynamically allocated memory
    free(duplicate);

    return 0;
}*/
