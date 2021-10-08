/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:18:12 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 21:30:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] <= 122 && str[count] >= 97)
		{
			str[count] -= 32;
		}
		count ++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "Helloworld";

// 	ft_strupcase(str1);
// 	printf("%s\n", str1);
// 	return (0);
// }
