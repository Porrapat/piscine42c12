/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:24:46 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 14:24:46 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex02/ft_list.h"

int	main(void)
{
	int		data;
	int		data2;
	int		size;
	t_list	*base_list;

	data = 10;
	data2 = 20;
	base_list = ft_create_elem((void *)&data);
	ft_list_push_front(&base_list, (void *)&data2);
	printf("list->next: %p\n", base_list->next);
	printf("list->data: %d\n", *((int *)(base_list->data)));
	printf("list->x->next: %p\n", base_list->next->next);
	printf("list->x->data: %d\n", *((int *)(base_list->next->data)));
	size = ft_list_size(base_list);
	printf("size is %d\n", size);
}
