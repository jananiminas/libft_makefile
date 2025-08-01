/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:30:09 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:42:59 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	delete_content(void *content)
// {
// 	free(content);
// }
// 
// int	main(void)
// {
// 	t_list *n1 = ft_lstnew(strdup("A"));
// 	t_list *n2 = ft_lstnew(strdup("B"));
// 	t_list *n3 = ft_lstnew(strdup("C"));
// 
// 	n1->next = n2;
// 	n2->next = n3;
// 
// 	ft_lstclear(&n1, delete_content);
// }
