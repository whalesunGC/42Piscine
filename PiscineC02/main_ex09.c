/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:26:12 by wichee            #+#    #+#             */
/*   Updated: 2024/03/06 07:30:12 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcapitalize(char *str);

int main() {
    char testString1[] = "hello world";
    char testString2[] = "the quick brown fox";
    char testString3[] = "aBc DeF gHi";

    // Testing ft_strcapitalize
    printf("Original string 1: %s\n", testString1);
    ft_strcapitalize(testString1);
    printf("Capitalized string 1: %s\n\n", testString1);

    printf("Original string 2: %s\n", testString2);
    ft_strcapitalize(testString2);
    printf("Capitalized string 2: %s\n\n", testString2);

    printf("Original string 3: %s\n", testString3);
    ft_strcapitalize(testString3);
    printf("Capitalized string 3: %s\n\n", testString3);

    return 0;
}
