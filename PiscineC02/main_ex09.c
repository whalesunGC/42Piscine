/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:26:12 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:27:31 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strcapitalize(char *str);

int main()
{
    // Test ft_strcapitalize
    char test_str[] = "capitalize the first letter of each word";

    printf("Before: %s\n", test_str);
    ft_strcapitalize(test_str);
    printf("After: %s\n", test_str);

    return 0;
}
