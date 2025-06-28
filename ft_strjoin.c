/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:13 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len1;
	size_t len2;
	char *res;
	size_t i;
	size_t j;

	if(!s1 || !s2)
	return 0;
	len1 = 0;
	while(s1[len1] != '\0')
	len1++;
	len2 = 0;
	while(s2[len2] != '\0')
	len2++;
	res =(char *)malloc(len1 + len2 + 1);
	if(!res)
	return 0;
	i = 0;
	while(i < len1)
{
	res[i] = s1[i];
	i++;
}
	j = 0;
	while(j < len2)
{
	res[i + j] = s2[j];
	j++;
}
	res[i + j] = '\0';
	return res;
}
