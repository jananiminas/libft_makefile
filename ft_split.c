/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:36:55 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 13:34:39 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	split_words(const char *s, char c, char **result)
{
	int	i;
	int	index;
	int	len;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			result[index++] = word_dup(s + i, len);
			i += len;
		}
		else
			i++;
	}
	result[index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	split_words(s, c, result);
	return (result);
}

// int	main(void)
// {
// 	char **words = ft_split("hi how are you", ' ');
// 	int i = 0;
//
// 	while (words[i])
// 	{
// 		printf("word[%d]: %s\n", i, words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);
// }
