/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:54:12 by kpoquita          #+#    #+#             */
/*   Updated: 2021/06/08 07:10:07 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int p;

	p = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		p = p * nb;
		power--;
	}
	return (p);
}
