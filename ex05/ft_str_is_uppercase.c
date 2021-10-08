/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:13:46 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 20:18:31 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 90)
			flag = 0;
		count ++;
	}
	return (flag);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_str_is_uppercase("HELLOWORLD");
// 	printf("i = %d \n", i);
// 	return (0);
// }