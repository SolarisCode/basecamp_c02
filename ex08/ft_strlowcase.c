/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:33:10 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 21:39:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] <= 90 && str[count] >= 65)
		{
			str[count] += 32;
		}
		count ++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str1[] = "hELLOwoRLD";

// 	ft_strlowcase(str1);
// 	printf("%s\n", str1);
// 	return (0);
// }