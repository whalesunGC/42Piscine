/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:12:00 by wichee            #+#    #+#             */
/*   Updated: 2024/03/01 16:32:19 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr=42;
}

int main()
{
    int myNumber = 0;
    printf("Before: %d\n", myNumber);

    ft_ultimate_ft(********&myNumber);

    printf("After: %d\n", myNumber);
    return 0;
}
