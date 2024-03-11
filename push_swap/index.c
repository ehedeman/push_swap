/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:07:03 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/11 13:00:26 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_index(t_list **stack)
{
	t_list	*temp;
	int		i;

	i = 1;
	temp = stack[0];
	while (temp->next)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
	temp->index = i;
}
