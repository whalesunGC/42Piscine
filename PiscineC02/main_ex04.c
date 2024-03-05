/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:19:40 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:20:17 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_lowercase(char *str);

int main()
{
    // Test ft_str_is_lowercase
    char lowercase_str[] = "abcdefghijklmnopqrstuvwxyz";
    char non_lowercase_str[] = "Abcdef";

    if (ft_str_is_lowercase(lowercase_str))
        printf("%s is lowercase\n", lowercase_str);
    else
        printf("%s is not lowercase\n", lowercase_str);

    if (ft_str_is_lowercase(non_lowercase_str))
        printf("%s is lowercase\n", non_lowercase_str);
    else
        printf("%s is not lowercase\n", non_lowercase_str);

    return 0;
}
