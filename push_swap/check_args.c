/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehedeman <ehedeman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:43:07 by ehedeman          #+#    #+#             */
/*   Updated: 2024/03/08 12:24:31 by ehedeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atoi_long(const char *str)
{
	long	i;
	long	nbr;
	int		negative;

	i = 0;
	nbr = 0;
	negative = 1;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t'
			||str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f'))
		i++;
	if (str[i] != '\0' && str[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	nbr *= negative;
	return (nbr);
}

static int	is_num(char *num)
{
	while (*num)
	{
		if (ft_isdigit(*num) == 0)
			return (1);
		num++;
	}
	return (0);
}
// static int	find_length(char **args)
// {
// 	int	i;

// 	i = 0;
// 	while (args[i])
// 		i++;
// 	return (i);
// }
//only use if argc == 2. If argc > 2 then it will segfault

int	check_format(char **arg, int argc, int i, int ret)
{
	long	temp;

	while (arg[i])
	{
		if (is_num(arg[i]) == 1 && ret == 0)
			ret = 1;
		if (ret == 0)
			temp = ft_atoi_long(arg[i]);
		if (temp > 2147483647 || temp < -2147483648)
			ret = 1;
		if (temp != ft_atoi(arg[i]) && ret == 0)
			ret = 1;
		i++;
	}
	if (ret == 1)
	{
		free_array(arg, argc);
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
