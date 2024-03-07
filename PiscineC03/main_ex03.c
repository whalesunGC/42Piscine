/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:22:11 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 12:27:25 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main() {
    // Test Case 1: Concatenate two strings within the given limit
    char dest1[20] = "Hello";
    char src1[] = ", World!";
    ft_strncat(dest1, src1, 3);

    // Test Case 2: Concatenate two strings, but limit exceeds length of src
    char dest2[20] = "Hello";
    char src2[] = ", World!";
    ft_strncat(dest2, src2, 15);

    // Test Case 3: Concatenate two strings, limit equals length of src
    char dest3[20] = "Hello";
    char src3[] = ", World!";
    ft_strncat(dest3, src3, 8);

    // Output the results
    printf("Result 1: %s\n", dest1);
    printf("Result 2: %s\n", dest2);
    printf("Result 3: %s\n", dest3);

    return 0;
}
