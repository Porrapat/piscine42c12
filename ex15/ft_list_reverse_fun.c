/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*next;
	t_list	*current;
	void	*previous_value;

	if (begin_list == 0)
		return ;
	previous_value = 0;
	current = begin_list;
	while (current != NULL)
	{
		next = current->next;
		if (next != 0)
			break ;
		previous_value = next->data;
		current->data = previous_value;
		current = next;
	}
	begin_list->data = previous_value;
}
