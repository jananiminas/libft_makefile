/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:53:20 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:41:49 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char str[10] = "outline";
// 	printf("Before bzero:%s\n", str);
// 	ft_bzero(str, 3);
// 	printf("After bzero:%s\n", str + 3);
// }
