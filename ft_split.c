/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagunduz <yagunduz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:45:31 by yagunduz          #+#    #+#             */
/*   Updated: 2025/06/28 14:38:09 by yagunduz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t count = 0;
	int in_word = 0;
	while(*s)
{
		if(*s != c && !in_word)
{
	in_word = 1;
	count++;
}
	else	if(*s == c)
	in_word = 0;
	s++;
}
	return count;
}

static char *word_dup(const char *s, size_t len)
{
	char *word =(char *)malloc(len + 1);
	size_t i = 0;
	if(!word)
	return 0;
	while(i < len)
{
	word[i] = s[i];
	i++;
}
	word[i] = '\0';
	return word;
}

static void	free_all(char **arr, size_t n)
{
	size_t i = 0;
	while(i < n)
{
	free(arr[i]);
	i++;
}
	free(arr);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	size_t words;
	size_t i = 0;
	size_t j = 0;
	size_t start = 0;
	if(!s)
	return 0;
	words = count_words(s, c);
	arr =(char **)malloc((words + 1)* sizeof(char *));
	if(!arr)
	return 0;
	while(s[i])
{
	while(s[i] == c)
	i++;
	start = i;
	while(s[i] && s[i] != c)
	i++;
	if(i > start)
{
	arr[j] = word_dup(s + start, i - start);
	if(!arr[j])
{
	free_all(arr, j);
	return 0;
}
	j++;
}
}
	arr[j] = 0;
	return arr;
}
