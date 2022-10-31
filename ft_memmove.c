/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:20:05 by thuynguy          #+#    #+#             */
/*   Updated: 2022/10/25 17:23:50 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t N)
{
	char	temp[N];

	if (dst == NULL && src == NULL)
		return (NULL);
	ft_memcpy(temp, src, N);
	ft_memcpy(dst, temp, N);
	return (dst);
}
