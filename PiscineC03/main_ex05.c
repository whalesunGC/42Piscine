/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:26:01 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 14:17:09 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main() {
    // Test Case 1: Concatenate strings within the buffer size
    char dest1[15] = "Hello";
    char src1[] = ", World!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));

    // Test Case 2: Concatenate strings, exceeding buffer size
    char dest2[10] = "Hello";
    char src2[] = ", World!";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));

    // Output the results
    printf("Result 1: %zu, Concatenated String: %s\n", result1, dest1);
    printf("Result 2: %zu, Concatenated String: %s\n", result2, dest2);

    return 0;
}
