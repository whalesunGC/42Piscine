/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:10:15 by wichee            #+#    #+#             */
/*   Updated: 2024/03/14 00:15:48 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main() {
    // Test Case 1: Equal strings
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result1 = ft_strncmp(str1, str2, 5); // Compare the first 5 characters

    // Test Case 2: Different strings
    char str3[] = "Hello";
    char str4[] = "World";
    int result2 = ft_strncmp(str3, str4, 2); // Compare the first 5 characters

    // Test Case 3: Different strings with different lengths
    char str5[] = "Hello";
    char str6[] = "Hello, World";
    int result3 = ft_strncmp(str5, str6, 9); // Compare the first 9 characters

	// Test Case 4: Different strings str1 > str2
	char str7[] = "Hallo";
	char str8[] = "Hello";
	int result4 = ft_strncmp(str7, str8, 1);

    // Test Case 5: Null strings
    char str9[] = "";
    char str10[] = "";
    int result5 = ft_strncmp(str9, str10, 2); // Compare the first 1 character

    // Output the results
    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);
    printf("Result 5: %d\n", result5);

    return 0;
}
