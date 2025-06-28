/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:44:55 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 13:44:57 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *res;
	unsigned int i;
	if(!s || !f)
	return 0;
	i = 0;
	while(s[i])
	i++;
	res =(char *)malloc(i + 1);
	if(!res)
	return 0;
	i = 0;
	while(s[i])
{
	res[i] = f(i, s[i]);
	i++;
}
	res[i] = '\0';
	return res;
}
