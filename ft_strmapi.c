/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:43:08 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:45:43 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	add_index(unsigned int i, char c)
// {
// 	return (c + i);
// }
// 
// int	main(void)
// {
// 	char *s = "abcde";
// 	char *new = ft_strmapi(s, add_index);
// 
// 	printf("Original: %s\n", s);
// 	printf("Mapped:   %s\n", new);
// 
// 	free(new);
// 	return (0);
// }
