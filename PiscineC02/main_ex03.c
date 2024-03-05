/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:17:17 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:18:50 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);
int	ft_str_is_numeric(char *str);

int main()
{
    // Test ft_str_is_numeric
    char numeric_str[] = "12345";
    char non_numeric_str[] = "abc123";

    if (ft_str_is_numeric(numeric_str))
        printf("%s is numeric\n", numeric_str);
    else
        printf("%s is not numeric\n", numeric_str);

    if (ft_str_is_numeric(non_numeric_str))
        printf("%s is numeric\n", non_numeric_str);
    else
        printf("%s is not numeric\n", non_numeric_str);

    return 0;
}
