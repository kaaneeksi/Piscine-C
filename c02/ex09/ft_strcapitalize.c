/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 13:01:59 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/14 13:01:59 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if ( str[0] <= 'z' && str[0] >= 'a')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{	if (str[i] >= 'A' && str[i] <= 'Z')


	}
}
