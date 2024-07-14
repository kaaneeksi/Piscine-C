/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:40:54 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/14 17:40:54 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d_len;
	int	s_len;

	s_len = 0;
	d_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
		if (dest[d_len] == '\0')
		{
			while (src[s_len] != '\0')
			{
				dest[d_len] = src[s_len];
				s_len++;
				d_len++;
			}
		}
	}
	return (dest);
}
