/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecaceres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:15:11 by ecaceres          #+#    #+#             */
/*   Updated: 2019/08/22 15:15:11 by ecaceres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#include "ex06/ft_list.h"

void	print_element(void *element)
{
	printf("element:: %d\n", *((int *)element));
	free(element);
}

int		main(void)
{
	int		*index;
	int		*malloced_index;
	t_list	*list;

	index = malloc(sizeof(int));
	*index = 0;
	list = ft_create_elem(index);
	while ((*index += 1) < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = *index;
		ft_list_push_back(&list, (void *)malloced_index);
	}
	ft_list_clear(list, &print_element);
}
