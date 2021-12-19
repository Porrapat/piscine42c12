/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:45:58 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 16:45:58 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*next;
	t_list	*previous;
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
