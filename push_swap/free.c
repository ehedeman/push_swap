/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:22:59 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/08 12:37:01 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char	**array, int argc)
{
	int		i;

	if (array && argc == 2)
	{
		i = 0;
		while (array[i])
		{
			free(array[i]);
			i++;
		}
		free(array);
	}
}

void	free_lst(t_list **stack)
{
	t_list	*temp;

	if (stack[0])
	{
		while (stack[0]->next)
		{
			temp = stack[0]->next;
			free(stack[0]);
			stack[0] = temp;
		}
		free(stack[0]);
	}
	free(stack);
}
