/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:36:09 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/09 23:36:09 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	yb;
	int	ob;
	int	bb;

	yb = '0';
	while (yb <= '7')
	{
		ob = yb + 1;
		while (ob <= '8')
		{
			bb = ob + 1;
			while (bb <= '9')
			{
				write(1, &yb, 1);
				write(1, &ob, 1);
				write(1, &bb, 1);
				if (yb != '7')
					write(1, ", ", 2);
				bb++;
			}
			ob++;
		}
		yb++;
	}
}
