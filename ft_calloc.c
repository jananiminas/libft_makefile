/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:35:28 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:41:57 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	btotal;

	btotal = count * size;
	ptr = malloc(btotal);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, btotal);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;
// 	str = (char *)ft_calloc(5, sizeof(char));
// 	i = 0;
// 	if (!str)
// 		return (1);
// 	str[0] = 'g';
// 	str[1] = 'o';
// 	str[2] = 'o';
// 	str[3] = 'd';
// 	printf("OutputString: %s\n", str);
// 	free(str);
// }
