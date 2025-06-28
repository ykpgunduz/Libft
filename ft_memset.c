/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:51 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:58:19 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;

	ptr =(unsigned char *)b;
	i = 0;
	while(i < len)
{
	ptr[i] =(unsigned char)c;
	i++;
}
	return b;
}
