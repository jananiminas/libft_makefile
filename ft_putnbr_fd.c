/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:47:44 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:44:52 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

// int main(void)
// {
//     ft_putnbr_fd(-2147483648,1);
//     ft_putchar_fd('\n',1);
//     ft_putnbr_fd(634567,1);
//     ft_putchar_fd('\n',1);
//     ft_putnbr_fd(-42,1);
// }
