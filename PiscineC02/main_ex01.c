/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:02:23 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:06:02 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);
char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
    // Test ft_strncpy
    char src[] = "Hello, World!";
    char dest[20];  // Make sure to allocate enough space for the destination string

    // Copy the first 5 characters from src to dest
    ft_strncpy(dest, src, 5);

    // Print the result
    printf("Source: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
}
