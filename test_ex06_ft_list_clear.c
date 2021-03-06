/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppetchda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:22:59 by porrapat          #+#    #+#             */
/*   Updated: 2021/12/17 14:23:55 by porrapat         ###   ########.fr       */
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

int	main(void)
{
	int		*index;
	int		*malloced_index;
	t_list	*list;
	t_list	*current;
	int		jindex;

	index = malloc(sizeof(int));
	*index = 0;
	list = ft_create_elem(index);
	while ((*index += 1) < 10)
	{
		malloced_index = malloc(sizeof(int));
		*malloced_index = *index;
		ft_list_push_back(&list, (void *)malloced_index);
	}
	current = list;
	jindex = 0;
	while (current != 0)
	{
		printf("list[%d] = $%d$\n", jindex++, *((int *)current->data));
		current = current->next;
	}
	printf("Size before clear %d\n", ft_list_size(list));
	ft_list_clear(list, &print_element);
	list = ft_create_elem(index);
	printf("Size after clear %d\n", ft_list_size(list));
}
