/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 18:51:12 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 18:51:13 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "ex14/ft_list.h"

void	ft_swap_void(void **a, void **b);

int		less_than(void *a, void *b)
{
	return ((*(int *)a) > (*(int *)b));
}

int		main(void)
{
	int		index;
	int		*malloced_index;
	t_list	*list;
	t_list	*current;

	index = 1;
	list = ft_create_elem(0);
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = 9 - index;
		ft_list_push_back(&list, (void *)malloced_index);
		printf("list[%d] = %d\n", index, *malloced_index);
		index++;
	}
	index = 1;
	ft_list_sort(&(list->next), &less_than);
	printf("Sorted\n");
	current = list->next;
	while (index < 10)
	{
		printf("list[%d] = %d\n", index, *((int *)current->data));
		index++;
		current = current->next;
	}
}
