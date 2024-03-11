/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:28:58 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/11 13:06:12 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_list **stack_from, t_list **stack_to)
{
	t_list	*head_to;
	t_list	*head_from;
	t_list	*temp;

	if (!stack_from[0])
		return ;
	head_to = stack_to[0];
	head_from = stack_from[0];
	temp = head_from;
	head_from = head_from->next;
	stack_from[0] = head_from;
	if (!head_to)
	{
		head_to = temp;
		head_to->next = NULL;
		stack_to[0] = head_to;
	}
	else
	{
		temp->next = head_to;
		stack_to[0] = temp;
	}
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	ft_printf("pa\n");
	push(stack_b, stack_a);
}
//from top of b to top of a

void	push_b(t_list **stack_a, t_list **stack_b)
{
	ft_printf("pb\n");
	push(stack_a, stack_b);
}
//from top of b to top of a