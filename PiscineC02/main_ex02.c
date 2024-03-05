/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:06:09 by wichee            #+#    #+#             */
/*   Updated: 2024/03/06 07:15:51 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_alpha(char *str);

int main()
{
    // Test ft_strlen
    char str[] = "Hello, World!";
    int length = ft_strlen(str);
    printf("Length of str: %d\n", length);

    // Test ft_str_is_alpha
    char alpha_str[] = "HelloWorld";
    char non_alpha_str[] = "1234";

    if (ft_str_is_alpha(alpha_str))
        printf("%s is alphabetic\n", alpha_str);
    else
        printf("%s is not alphabetic\n", alpha_str);

    if (ft_str_is_alpha(non_alpha_str))
        printf("%s is alphabetic\n", non_alpha_str);
    else
        printf("%s is not alphabetic\n", non_alpha_str);

    return 0;
}
