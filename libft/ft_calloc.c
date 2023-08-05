/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:48:11 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/22 19:16:17 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret_val;

	ret_val = (void *) malloc(size * count);
	if (!ret_val)
		return (NULL);
	ft_bzero(ret_val, count * size);
	return (ret_val);
}
