/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:35:40 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:43:20 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	print_uppercase(void *content)
// {
// 	char	*s = (char *)content;
// 	while (*s)
// 	{
// 		char c = ft_toupper(*s);
// 		write(1, &c, 1);
// 		s++;
// 	}
// 	write(1, "\n", 1);
// }
//
// int main(void)
// {
// 	t_list *a = ft_lstnew("hello");
// 	t_list *b = ft_lstnew("libft");
// 	a->next = b;
//
// 	ft_lstiter(a, print_uppercase);
//
// 	ft_lstclear(&a, NULL);
// 	return (0);
// }
