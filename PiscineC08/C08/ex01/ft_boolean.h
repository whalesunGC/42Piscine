/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wichee <wichee@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:09:02 by wichee            #+#    #+#             */
/*   Updated: 2024/03/15 15:14:17 by wichee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

typedef struct t_bool
{
	int		true_value;
	int		false_value;
	int		even;
	char	even_msg[36];
	char	odd_msg[35];
}	t_bool;

# define EVEN(x) ((x) % 2 == 0)

# define TRUE 1

# define FALSE 0

# define EVEN_MSG "I have an even number of arguments."

# define ODD_MSG "I have an odd number of arguments."

#endif
