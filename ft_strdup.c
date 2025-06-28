/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:23 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(const char *s1)
{
	size_t len;
	char *copy;
	size_t i;

	len = 0;
	while(s1[len] != '\0')
	len++;
	copy =(char *)malloc(len + 1);
	if(!copy)
	return 0;
	i = 0;
	while(i < len)
{
	copy[i] = s1[i];
	i++;
}
	copy[i] = '\0';
	return copy;
}
