/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:48:36 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 14:48:36 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex04/ft_list.h"

int		main(void)
{
	int		data;
	int		data2;
	t_list	*base_list;

	data = 10;
	data2 = 20;
	base_list = ft_create_elem((void *)&data);
	ft_list_push_back(&base_list, (void *)&data2);
	printf("list->next: %p\n", base_list->next);
	printf("list->data: %d\n", *((int *)(base_list->data)));
	printf("list->x->next: %p\n", base_list->next->next);
	printf("list->x->data: %d\n", *((int *)(base_list->next->data)));
}
