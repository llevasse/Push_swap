/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <llevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:50:25 by llevasse          #+#    #+#             */
/*   Updated: 2023/06/28 23:33:25 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int *lst, int len)
{
	int	temp_len;
	int	temp1;
	int	temp2;
	int	second;

	if (len < 2)
		return ;
	temp_len = len - 1;
	temp1 = lst[0];
	second = lst[1];
	while (temp_len > 0)
	{
		temp2 = lst[temp_len];
		lst[temp_len] = temp1;
		temp1 = temp2;
		temp_len--;
	}
	lst[len - 1] = lst[0];
	lst[0] = second;
}
