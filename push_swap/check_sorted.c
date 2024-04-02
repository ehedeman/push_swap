/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:06:16 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/28 12:18:01 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_list *stack)
{
	int	i;

	i = stack->value;
	while (stack)
	{
		if (i > stack->value)
			return (1);
		i = stack->value;
		stack = stack->next;
	}
	return (0);
}
