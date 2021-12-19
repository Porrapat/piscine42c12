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

#include <stdio.h>
#include <stdlib.h>

#include "ex15/ft_list.h"

int		main(void)
{
	int		index;
	int		*malloced_index;
	//int		*data;
	t_list	*list;
	t_list	*current;

	index = 1;
	list = ft_create_elem(0);
	while (index < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = index;
		ft_list_push_back(&list, (void *)malloced_index);
		printf("%p list[%d] = %d\n", malloced_index, index, *malloced_index);
		index++;
	}
	index = 1;
	ft_list_reverse_fun(list->next);
	printf("Reversed\n");
	current = list->next;
	while (index < 10)
	{
		//data = (int *)current->data;
		//printf("list[%d] = %d\n", index, data != 0 ? *data : -1);
		printf("list[%d] = %d\n", index, *((int *)current->data));
		index++;
		current = current->next;
	}
}
