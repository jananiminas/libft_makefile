/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:21:15 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:44:44 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putstr_fd("\n", fd);
}

// int	main(void)
// {
// 	ft_putendl_fd("Timeline", 1); 
// 	ft_putendl_fd("", 1);
// 	ft_putendl_fd("libft", 1);          
// }
