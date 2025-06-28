/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:44:46 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:58:19 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if(*needle == '\0')
		return(char *)haystack;
	i = 0;
	while(haystack[i] != '\0' && i < len)
	{
		j = 0;
		while(needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
			j++;
		if(needle[j] == '\0')
	return(char *)(haystack + i);
	i++;
}
	return 0;
}
