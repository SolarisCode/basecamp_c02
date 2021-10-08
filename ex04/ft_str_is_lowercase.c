/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:45:42 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 20:10:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 97 || str[count] > 122)
			flag = 0;
		count ++;
	}
	return (flag);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_str_is_lowercase("helloworld");
// 	printf("i= %d \n", i);
// 	return (0);
// }
