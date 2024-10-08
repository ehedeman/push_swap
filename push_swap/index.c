/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:07:03 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/21 12:26:10 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_next_min(t_list **a)
{
	t_list	*temp;
	t_list	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	temp = a[0];
	if (temp)
	{
		while (temp)
		{
			if ((temp->index == 0) && (!has_min || temp->value < min->value))
			{
				min = temp;
				has_min = 1;
			}
			temp = temp->next;
		}
	}
	return (min);
}

void	assign_index(t_list **a)
{
	t_list	*temp;
	int		index;

	index = 1;
	temp = get_next_min(a);
	while (temp)
	{
		temp->index = index;
		index++;
		temp = get_next_min(a);
	}
}
