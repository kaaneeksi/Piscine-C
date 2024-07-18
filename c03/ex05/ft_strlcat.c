/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:45:04 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/18 16:45:04 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (dest[d_len] != '\0')
	{
		d_len++;
	}
	while (src[s_len] != '\0')
	{
		s_len++;
	}
	if (size <= d_len)
		return (size + s_len);
	while (src[i] != '\0' && d_len + 1 < size)
	{
		dest[d_len] = src[i];
		d_len++;
		i++;
	}
	dest[d_len] = '\0';
	return (d_len + s_len - i);
}
