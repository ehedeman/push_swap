/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:26:05 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/21 14:00:22 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_max(t_list *stack)
{
	int	i;

	i = stack->index;
	while (1)
	{
		stack = stack->next;
		if (i < stack->index)
			i = stack->index;
		if (stack->next == 0)
			break ;
	}
	return (i);
}

int	find_min(t_list *stack)
{
	int	i;

	i = stack->index;
	while (stack)
	{
		if (i > stack->index)
			i = stack->index;
		stack = stack->next;
	}
	return (i);
}

int	find_index(t_list *stack, int nbr)
{
	int	i;

	i = 0;
	while (stack->index != nbr)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	find_max_bits(t_list **stack)
{
	t_list	*temp;
	int		max;
	int		max_bits;

	temp = stack[0];
	max = temp->index;
	max_bits = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}
