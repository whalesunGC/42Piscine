/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:21:04 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:22:11 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_uppercase(char *str);

int main()
{
    // Test ft_str_is_uppercase
    char uppercase_str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char non_uppercase_str[] = "AbCdEf";

    if (ft_str_is_uppercase(uppercase_str))
        printf("%s is uppercase\n", uppercase_str);
    else
        printf("%s is not uppercase\n", uppercase_str);

    if (ft_str_is_uppercase(non_uppercase_str))
        printf("%s is uppercase\n", non_uppercase_str);
    else
        printf("%s is not uppercase\n", non_uppercase_str);

    return 0;
}

