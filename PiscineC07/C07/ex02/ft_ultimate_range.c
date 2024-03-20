/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:19:53 by wichee            #+#    #+#             */
/*   Updated: 2024/03/20 16:15:54 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	entry;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof (int));
	if (*range == NULL)
		return (-1);
	i = 0;
	entry = min;
	while (i < (max - min))
	{
		(*range)[i] = entry;
		entry++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main() {
    int *range;
    int min, max;
    int num_elements;

    // Test Case 1: Valid range (5 to 10)
    min = 5;
    max = 10;
    printf("Test Case 1: Valid Range (%d to %d)\n", min, max);
    num_elements = ft_ultimate_range(&range, min, max);

    if (num_elements == -1) {
        printf("Failed to allocate memory.\n");
        return 1;
    } else if (num_elements == 0) {
        printf("Empty range.\n");
    } else {
        printf("Generated range: ");
        for (int i = 0; i < num_elements; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }

    // Test Case 2: Empty range (10 to 5)
    min = 10;
    max = 5;
    printf("\nTest Case 2: Empty Range (%d to %d)\n", min, max);
    num_elements = ft_ultimate_range(&range, min, max);

    if (num_elements == -1) {
        printf("Failed to allocate memory.\n");
        return 1;
    } else if (num_elements == 0) {
        printf("Empty range.Range should return -1. %d \n");
    } else {
        printf("Generated range: ");
        for (int i = 0; i < num_elements; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }

    // Test Case 3: Single-element range (3 to 4)
    min = 3;
    max = 4;
    printf("\nTest Case 3: Single-element Range (%d to %d)\n", min, max);
    num_elements = ft_ultimate_range(&range, min, max);

    if (num_elements == -1) {
        printf("Failed to allocate memory.\n");
        return 1;
    } else if (num_elements == 0) {
        printf("Empty range.\n");
    } else {
        printf("Generated range: ");
        for (int i = 0; i < num_elements; i++) {
            printf("%d ", range[i]);
        }
        printf("\n");
        free(range);
    }

    return 0;
}*/
