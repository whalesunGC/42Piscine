/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:19:22 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 12:21:02 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcat(char *dest, char *src);

int main() {
    // Test Case 1: Concatenate two strings
    char dest1[20] = "Hello";
    char src1[] = ", World!";
    ft_strcat(dest1, src1);

    // Test Case 2: Concatenate an empty string
    char dest2[20] = "Hello";
    char src2[] = "";
    ft_strcat(dest2, src2);

    // Test Case 3: Concatenate to an empty string
    char dest3[20] = "";
    char src3[] = "Hello";
    ft_strcat(dest3, src3);

    // Test Case 4: Concatenate to an empty string with an empty source
    char dest4[20] = "";
    char src4[] = "";
    ft_strcat(dest4, src4);

    // Output the results
    printf("Result 1: %s\n", dest1);
    printf("Result 2: %s\n", dest2);
    printf("Result 3: %s\n", dest3);
    printf("Result 4: %s\n", dest4);

    return 0;
}

