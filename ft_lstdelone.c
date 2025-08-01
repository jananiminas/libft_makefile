/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:23:17 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:43:08 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	delete_content(void *content)
// {
// 	free(content);
// }
// 
// int	main(void)
// {
// 	char *data = strdup("Node data");
// 	t_list *node = ft_lstnew(data);
// 
// 	ft_lstdelone(node, delete_content);
// }
