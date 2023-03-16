/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:41:08 by cristian          #+#    #+#             */
/*   Updated: 2023/02/15 13:07:30 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index;
	unsigned int	index2;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	index2 = 0;
	while (src[index2] != '\0' && index2 < nb)
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[11]  = "Morci";
	char src[] = "llote";
	int index = 0;
		
	strncat(dest, src, 3);
	while (dest[index] != '\0')
	{	
		printf("%c", dest[index]);
		index++;
	}
	return 0;
}*/
