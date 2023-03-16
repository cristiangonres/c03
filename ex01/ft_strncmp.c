/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:48:05 by cristian          #+#    #+#             */
/*   Updated: 2023/02/16 01:31:17 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				ndiff;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] == s2[index])
			index++;
		else if (s1[index] != s2[index])
		{
			ndiff = s1[index] - s2[index];
			return (ndiff);
		}
	}
	return (0);
}

/*int	main(void)
{
	char	dest[] = "";
	char	src[] = "sdfds";
	int		n = 5;

	n = ft_strncmp(dest, src, 3);
	printf("%d\n", n);
	n = strncmp(dest, src, 3);
	printf("%d", n);
}*/
