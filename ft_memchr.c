/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:44:55 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:43:46 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "how are you";
// 	char *result = ft_memchr(str, 'r', 8);
// 
// 	if (result)
// 		printf("Found: '%c'\n", *result);
// 	else
// 		printf("Not found\n");
// 
// }
