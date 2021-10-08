/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:34:36 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 19:43:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 48 || str[count] > 57)
			flag = 0;
		count ++;
	}
	return (flag);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_str_is_numeric("123");
// 	printf("i= %d \n", i);
// 	return (0);
// }
