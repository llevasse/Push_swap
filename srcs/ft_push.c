/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <llevasse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:46:02 by llevasse          #+#    #+#             */
/*   Updated: 2023/01/25 23:00:09 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pa(t_int_list *lst, t_int_list *lst_sim)
{
	if (!lst->len_b)
		return ;
	push(lst->lst_a, lst->lst_b, &lst->len_a, &lst->len_b);
	lst->len_b -= 1;
	ft_printf("pa\n");
	if (!lst_sim)
		return ;
	push(lst_sim->lst_a, lst_sim->lst_b, &lst_sim->len_a, &lst_sim->len_b);
	lst_sim->len_b -= 1;
}

void	ft_pb(t_int_list *lst, t_int_list *lst_sim)
{
	if (!lst->len_a)
		return ;
	push(lst->lst_b, lst->lst_a, &lst->len_b, &lst->len_a);
	lst->len_a -= 1;
	ft_printf("pb\n");
	if (!lst_sim)
		return ;
	push(lst_sim->lst_b, lst_sim->lst_a, &lst_sim->len_b, &lst_sim->len_a);
	lst_sim->len_a -= 1;
}
