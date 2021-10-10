/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 01:09:59 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 02:00:54 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	if (str[x] >= 97 && str[x] <= 122)
		str[x] -= 32;
	while (str[x] != '\0')
	{
		if (str[x - 1] < 48 || (str[x - 1] > 57 && str[x - 1] < 65)
			|| (str[x - 1] > 90 && str[x - 1] < 97) || str[x - 1] > 122)
		{
			if (str[x] >= 97 && str[x] <= 122)
				str[x] -= 32;
		}
		else if (str[x] >= 65 && str[x] <= 90)
			str[x] += 32;
		x ++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[80] =
//  "saLut, coMmEnt tu vas ? 42mots quaRante-deux; cinquAnte+eT+uN";
// 	ft_strcapitalize(str1);
// 	printf("%s\n", str1);
// 	return (0);
// }
