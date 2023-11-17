/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-asri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:02:35 by oel-asri          #+#    #+#             */
/*   Updated: 2023/11/15 19:48:26 by oel-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	len_src = ft_strlen(src);
	len_dest = 0;
	i = 0;
	while (dst[len_dest] != '\0' && len_dest < dstsize)
		len_dest++;
	while (src[i] != '\0' && len_dest + i + 1 < dstsize)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	if (len_dest < dstsize)
		dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
