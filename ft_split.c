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

static size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	ft_free_all(char **split, size_t i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static char	**ft_fill(char **split, const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			split[i] = ft_substr(s - len, 0, len);
			if (!split[i++])
				return (ft_free_all(split, i), NULL);
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!split)
		return (NULL);
	return (ft_fill(split, s, c));
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
