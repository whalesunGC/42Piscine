/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:24:47 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:26:05 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strlen(char *str);
char	*ft_strlowercase(char *str);

int main()
{
    // Test ft_strlowercase
    char uppercase_str[] = "ConvertMeToLowerCase";

    printf("Before: %s\n", uppercase_str);
    ft_strlowercase(uppercase_str);
    printf("After: %s\n", uppercase_str);

    return 0;
}
