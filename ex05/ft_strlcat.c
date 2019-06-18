/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 21:49:56 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/14 11:53:33 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_len(dest);
	if (len > size)
		return (ft_len(src) + size);
	while (i < size - len)
	{
		if (src[i] == '\0')
		{
			dest[len + i] = '\0';
			return (len + ft_len(src));
		}
		else
		{
			if (i == size - len - 1)
				dest[len + i] = '\0';
			else
				dest[len + i] = src[i];
		}
		i++;
	}
	return (len + ft_len(src));
}
