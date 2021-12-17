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
	int		index;
	t_list	*list;

	list = ft_create_elem(0);
	index = 0;
	while (index++ < 10)
		ft_list_push_front(&list, 0);
	printf("size: %d\n", ft_list_size(list));
}
