/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <llevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:45:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/06/28 23:33:26 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_highest_elem(int *lst, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = *lst;
	while (i < len)
	{
		if (*lst > temp)
			temp = *lst;
		lst++;
		i++;
	}
	return (temp);
}

int	get_lowest_elem(int *lst, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = lst[i];
	while (i < len)
	{
		if (lst[i] < temp)
			temp = lst[i];
		i++;
	}
	return (temp);
}

int	get_elem_position_in_sort(t_int_list *lst, int temp)
{
	int	i;
	int	*lst_a;

	i = 0;
	lst_a = lst->lst_a;
	if (temp < *lst_a)
		return (i);
	while (i < lst->len_a && temp > *lst_a)
	{
		i++;
		lst_a++;
	}
	return (i);
}
