/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:30:47 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/03 16:10:10 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int output;
	int sign;

	output = 0;
	while (*str != '\0')
	{
		sign = 1;
		while (*str == ' ' || (*str >= 7 && *str <= 13))
			str++;
		if (*str == '-')
			sign = -1;
		while (*str == '+' || *str == '-')
			str++;
		while (*str >= '0' && *str <= '9')
		{
			output = output * 10 + *str - '0';
			str++;
		}
		return (sign * output);
	}
	return (0);
}
