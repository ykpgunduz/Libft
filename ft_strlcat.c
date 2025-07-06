/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:09 by yagunduz          #+#    #+#             */
/*   Updated: 2025/07/06 18:38:32 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	while (dst[dlen] != '\0' && dlen < dstsize)
		dlen++;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dlen == dstsize)
		return (dstsize + slen);
	i = 0;
	while (src[i] != '\0' && dlen + i < dstsize - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < dstsize)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}
