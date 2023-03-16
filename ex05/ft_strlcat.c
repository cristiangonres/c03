/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:12:12 by cristian          #+#    #+#             */
/*   Updated: 2023/02/16 00:49:49 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_count_char(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_count_char(dest);
	srclen = ft_count_char(src);
	index1 = destlen;
	if (size <= destlen)
		return (srclen + size);
	index2 = 0;
	if (size > 0)
	{
		while (src[index2] != '\0' && index2 < size - destlen - 1)
		{
			dest[index1] = src[index2];
			index1++;
			index2++;
		}
	}
	dest[index1] = '\0';
	return (destlen + srclen);
}

/*int	main(void)
{
	char dest[20]  = "aaa";
	char src[20] = "aaa";
	unsigned int index = 0;	
	index = strlcat(dest, src, 11);
	printf("%u\n" , index);
	printf("%s\n", dest);
	printf("%s\n", src);	
	return 0;
}*/
