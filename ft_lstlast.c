/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:20:04 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:43:25 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list *a = ft_lstnew("1st");
// 	t_list *b = ft_lstnew("2nd");
// 	t_list *c = ft_lstnew("3rd");
// 
// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&a, c);
// 
// 	t_list *last = ft_lstlast(a);
// 	if (last)
// 		printf("Last node content: %s\n", (char *)last->content);
// }
