/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:47:27 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:41:42 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if ((sign == 1) && (res > 2147483648))
			return (-1);
		else if ((sign == -1) && (-res < -2147483648))
			return (0);
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {        
// 	printf("%d\n", ft_atoi("-333"));          
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("--++-2147"));
// 	printf("%d\n", ft_atoi("-2147483647")); 
// }
