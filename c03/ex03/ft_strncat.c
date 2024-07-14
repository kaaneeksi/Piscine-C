/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:14:07 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/14 18:14:07 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
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
			while (s_len < nb)
			{
				dest[d_len] = src[s_len];
				s_len++;
				d_len++;
			}
		}
	}
	dest[d_len + 1] = '\0';
	return (dest);
}
