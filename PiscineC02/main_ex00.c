/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:55:09 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:01:58 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
    // Test ft_strlen
    char str1[] = "Hello, World!";
    int length1 = ft_strlen(str1);
    printf("Length of str1: %d\n", length1);

    // Test ft_strcpy
    char str2[20];  // Make sure to allocate enough space for the destination string
    ft_strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    return 0;
}
