/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:26:15 by ide-ruit          #+#    #+#             */
/*   Updated: 2024/02/14 18:18:55 by ide-ruit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*in_word(const char *s, char c);
static size_t	count_words(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**cal;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	cal = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!cal)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			cal[j++] = in_word(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	cal[j] = NULL;
	return (cal);
}

static char	*in_word(const char *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}
