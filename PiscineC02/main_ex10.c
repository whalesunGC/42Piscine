/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:27:40 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:35:47 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strlcpy(char *dest, char *src, unsigned int n);

int main()
{
    // Test ft_strlcpy
    char src[] = "Hello, World!";
    char dest[10];

    printf("Before: %s\n", dest);
    ft_strlcpy(dest, src, 10);
    printf("After: %s\n", dest);

    return 0;
}

