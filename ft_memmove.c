/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:57 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;
	size_t i;

	d =(unsigned char *)dst;
	s =(const unsigned char *)src;
	if(d == s || len == 0)
	return dst;
	if(d < s)
{
	i = 0;
	while(i < len)
{
	d[i] = s[i];
	i++;
}
}
	else
{
	i = len;
	while(i > 0)
{
	d[i - 1] = s[i - 1];
	i--;
}
}
	return dst;
}
