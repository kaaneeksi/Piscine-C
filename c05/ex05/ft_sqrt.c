/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 02:31:45 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/22 02:31:45 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_sqrt(int nb)
{
	 int result;

	 result = 0;
	 result = nb * nb/2;
	return (result);


}
 int main ()
 {
	printf("%d",ft_sqrt(4));
 }
