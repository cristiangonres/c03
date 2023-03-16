/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:04:36 by cristian          #+#    #+#             */
/*   Updated: 2023/02/15 13:04:17 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	while (dest[index] != '\0')
		index++;
	index2 = 0;
	while (src[index2] != '\0')
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
	char dest[11]  = "";
	char src[] = "llote";
	
		
	ft_strcat(dest, src);
	printf("%s", dest);
	
	//strcat(dest, src);
	//printf("%s", dest);

	return 0;
}*/
