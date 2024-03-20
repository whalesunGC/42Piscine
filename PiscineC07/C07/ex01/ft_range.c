/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:00:19 by wichee            #+#    #+#             */
/*   Updated: 2024/03/20 16:03:35 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;
	int	entry;

	if (min >= max)
		return (NULL);
	int_array = (int *)malloc((max - min) * sizeof(int));
	if (int_array == NULL)
		return (NULL);
	i = 0;
	entry = min;
	while (entry < max)
	{
		int_array[i] = entry;
		i++;
		entry++;
	}
	return (int_array);
}
/*int main()
{
    // Test Case 1: Valid range
    printf("Test Case 1: Valid Range\n");
    int min1 = 5;
    int max1 = 10;
    int *range1 = ft_range(min1, max1);

    if (range1 == NULL) {
        printf("Failed to allocate memory or invalid range.\n");
        return 1;
    }

    printf("Generated range: ");
    for (int i = 0; i < max1 - min1; i++) {
        printf("%d ", range1[i]);
    }
    printf("\n");

    free(range1);

    // Test Case 2: Empty range (min >= max)
    printf("\nTest Case 2: Empty Range\n");
    int min2 = 10;
    int max2 = 5;
    int *range2 = ft_range(min2, max2);

    if (range2 == NULL) {
        printf("Failed to allocate memory or invalid range.\n");
    } else {
        printf("Generated range: ");
        if (range2 != NULL) {
            printf("[Empty]");
        }
        printf("\n");
        free(range2);
    }

    // Test Case 3: Negative range
    printf("\nTest Case 3: Negative Range\n");
    int min3 = -5;
    int max3 = 5;
    int *range3 = ft_range(min3, max3);

    if (range3 == NULL) {
        printf("Failed to allocate memory or invalid range.\n");
        return 1;
    }

    printf("Generated range: ");
    for (int i = 0; i < max3 - min3; i++) {
        printf("%d ", range3[i]);
    }
    printf("\n");

    free(range3);

    return 0;
}*/
