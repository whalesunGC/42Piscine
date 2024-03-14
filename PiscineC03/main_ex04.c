/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:27:50 by wichee            #+#    #+#             */
/*   Updated: 2024/03/14 11:24:35 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find);

int main() {
    // Test Case 1: Substring present in the string
    char str1[] = "Hello, World!";
    char sub1[] = "Hello";
    char* result1 = ft_strstr(str1, sub1);
	char* result1o = strstr(str1, sub1);

    // Test Case 2: Substring not present in the string
    char str2[] = "Hello, World!";
    char sub2[] = "Universe";
    char* result2 = ft_strstr(str2, sub2);
	char* result2o = strstr(str2, sub2);

    // Test Case 3: Empty string and substring
    char str3[] = "";
    char sub3[] = " hello";
    char* result3 = ft_strstr(str3, sub3);
	char* result3o = strstr(str3, sub3);

    // Test Case 4: Null string and substring
    char* str4 = NULL;
    char* sub4 = NULL;
    char* result4 = ft_strstr(str4, sub4);
//	char* result4o = strstr(str4, sub4);

    // Output the results
    printf("Result 1: %s\n", result1 ? result1 : "Not found");
    printf("Result 1o: %s\n", result1o ? result1o : "Not found");
    printf("Result 2: %s\n", result2 ? result2 : "Not found");
    printf("Result 2o: %s\n", result2o ? result2o : "Not found");
    printf("Result 3: %s\n", result3 ? result3 : "Not found");
    printf("Result 3o: %s\n", result3o ? result3o : "Not found");
    printf("Result 4: %s\n", result4 ? result4 : "Not found");
//    printf("Result 4o: %s\n", result4o ? result4o : "Not found");

    return 0;
}
