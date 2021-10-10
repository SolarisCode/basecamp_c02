/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 02:29:35 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 03:17:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	temp;

	count = 0;
	temp = 0;
	while (src[count] != '\0')
	{
		if (temp + 1 < size)
		{
			dest[count] = src[count];
			temp ++;
		}
		count ++;
	}
	dest[temp] = '\0';
	return (count);
}

// int	main(void)
// {
// 	char	str1[] = "Hellow World";
// 	char	str2[20];
// 	int	num;

// 	num = ft_strlcpy(str2, str1, 7);
// 	printf("Copied '%s' into '%s', length %d\n", str1, str2, num);
// 	return (0);
// }
