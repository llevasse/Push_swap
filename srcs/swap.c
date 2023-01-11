/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <llevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:51:28 by llevasse          #+#    #+#             */
/*   Updated: 2023/01/11 10:07:52 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *lst)
{
	int	temp;

	if (!lst[0] || !lst[1])
		return ;
	temp = lst[0];
	lst[0] = lst[1];
	lst[1] = temp;
}