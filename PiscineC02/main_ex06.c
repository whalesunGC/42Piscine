/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:22:55 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:23:22 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_printable(char *str);

int main()
{
    // Test ft_str_is_printable
    char printable_str[] = "Hello, World!";
    char non_printable_str[] = "Hello, \nWorld!";

    if (ft_str_is_printable(printable_str))
        printf("%s is printable\n", printable_str);
    else
        printf("%s is not printable\n", printable_str);

    if (ft_str_is_printable(non_printable_str))
        printf("%s is printable\n", non_printable_str);
    else
        printf("%s is not printable\n", non_printable_str);

    return 0;
}

