/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:20:47 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 21:14:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
			flag = 0;
		count ++;
	}
	return (flag);
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_str_is_printable("HelloWorld\n");
// 	printf("i = %d \n", i);
// 	return (0);
// }
