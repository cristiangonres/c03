/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:12:05 by cristian          #+#    #+#             */
/*   Updated: 2023/02/15 13:05:03 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;
	int	ndiff;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] == s2[n])
			n++;
		else if (s1[n] != s2[n])
		{
			ndiff = s1[n] - s2[n];
			return (ndiff);
		}
	}
	return (0);
}

/*int	main(void)
{
	char	dest[] = "sada";
	char	src[] = "";
	int		n;

	n = ft_strcmp(dest, src);
	printf("%d\n", n);
	n = strcmp(dest, src);
	printf("%d", n);	
}*/
