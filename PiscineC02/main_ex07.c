/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:24:00 by wichee            #+#    #+#             */
/*   Updated: 2024/03/05 18:24:41 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
char	*ft_strupcase(char *str);

#include <stdio.h>

int main()
{
    // Test ft_strupcase
    char str[] = "Hello, World!";
    
    printf("Original: %s\n", str);
    ft_strupcase(str);
    printf("Uppercase: %s\n", str);

    return 0;
}
