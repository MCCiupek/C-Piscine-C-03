/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 23:04:48 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/12 14:46:26 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "Bonjouv";
	s2 = "Bonjour";
	printf("ft_strcmp = %d\n", ft_strcmp(s1, s2));
	printf("strcmp = %d", strcmp(s1, s2));
}

