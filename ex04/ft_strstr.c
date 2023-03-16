/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:51:50 by cristian          #+#    #+#             */
/*   Updated: 2023/02/15 13:12:46 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	if (to_find[i1] == '\0')
		return (str);
	while (str[i1] != '\0')
	{
		i2 = 0;
		while (str[i1 + i2] == to_find[i2] && str[i1 + i2] != '\0')
		{
			if (to_find[i2 + 1] == '\0')
				return (&str[i1]);
			i2++;
		}
		i1++;
	}
	return (0);
}

/*int	main(void)
{
	char	to_find[] = "hola";
	char	str[] = "";
	//int		index = 0;
	char	*fs;
	
	fs = ft_strstr(str, to_find);
	if (fs == NULL)
    {
        printf ("Substring not found in the string");
    } 
    else
    {
        printf ("Substring located -> %s", fs);
    }
	return 0;
}*/
