/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:44:37 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	size_t i;
	size_t slen;

	if(!s)
	return 0;
	slen = 0;
	while(s[slen] != '\0')
	slen++;
	if(start >= slen)
	return(char *)malloc(1);
	if(len > slen - start)
	len = slen - start;
	sub =(char *)malloc(len + 1);
	if(!sub)
	return 0;
	i = 0;
	while(i < len)
{
	sub[i] = s[start + i];
	i++;
}
	sub[i] = '\0';
	return sub;
}
