/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeksi <yeksi@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 01:16:30 by yeksi             #+#    #+#             */
/*   Updated: 2024/07/11 01:16:30 by yeksi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = n;
	while (n > 0)
	{
		*dest = *src;
		if (*src == '\0')
			break ;
		dest++;
		src++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
