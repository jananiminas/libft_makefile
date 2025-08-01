/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:48:32 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:44:18 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;

	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char a[] = "abcde";
// 	char b[] = "abcdf";
//
// 	int result = ft_memcmp(a, b, 5);
//
// 	if (result == 0)
// 		printf("equal\n");
// 	else if (result < 0)
// 		printf("a < b\n");
// 	else
// 		printf("a > b\n");
// }
