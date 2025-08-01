/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:32:25 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/01 11:45:26 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void to_upper_even(unsigned int i, char *c)
// 
// 
// int main(void)
// {
// 	char str[] = "abcdef";
// 	ft_striteri(str, to_upper_even);
// 	printf("%s\n", str);
// }
