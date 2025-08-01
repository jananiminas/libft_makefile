/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:13:48 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:43:41 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list *a = ft_lstnew("one");
// 	t_list *b = ft_lstnew("two");
// 	t_list *c = ft_lstnew("three");
// 
// 	ft_lstadd_front(&a, b);
// 	ft_lstadd_front(&b, c);
// 
// 	printf("List size: %d\n", ft_lstsize(c));
// 	return (0);
// }
