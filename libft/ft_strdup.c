/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icopoglu <icopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:52:56 by icopoglu          #+#    #+#             */
/*   Updated: 2023/07/22 19:17:56 by icopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*ret_val;

	ret_val = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (ret_val == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ret_val[i] = s1[i];
		i++;
	}
	ret_val[i] = '\0';
	return (ret_val);
}
