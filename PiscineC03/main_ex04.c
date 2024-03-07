/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:27:50 by wichee            #+#    #+#             */
/*   Updated: 2024/03/07 12:29:59 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int main() {
    // Test Case 1: Substring present in the string
    char str1[] = "Hello, World!";
    char sub1[] = "World";
    char* result1 = ft_strstr(str1, sub1);

    // Test Case 2: Substring not present in the string
    char str2[] = "Hello, World!";
    char sub2[] = "Universe";
    char* result2 = ft_strstr(str2, sub2);

    // Test Case 3: Empty string and substring
    char str3[] = "";
    char sub3[] = "";
    char* result3 = ft_strstr(str3, sub3);

    // Test Case 4: Null string and substring
    char* str4 = NULL;
    char sub4[] = "Hello";
    char* result4 = ft_strstr(str4, sub4);

    // Output the results
    printf("Result 1: %s\n", result1 ? result1 : "Not found");
    printf("Result 2: %s\n", result2 ? result2 : "Not found");
    printf("Result 3: %s\n", result3 ? result3 : "Not found");
    printf("Result 4: %s\n", result4 ? result4 : "Not found");

    return 0;
}

