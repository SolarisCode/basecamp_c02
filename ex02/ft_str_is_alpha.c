/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:39:43 by coder             #+#    #+#             */
/*   Updated: 2021/10/08 19:30:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	count;
	int	flag;

	flag = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 65 || str[count] > 122)
			flag = 0;
		else if (str[count] > 90 && str[count] < 97)
			flag = 0;
		count ++;
	}
	return (flag);
}

// int	main(void)
// {
// 	char	c[13] = "skowlx.apqide";
// 	int	x;

// 	x = ft_str_is_alpha(c);
// 	x += 48;
// 	write(1, &x, 1);
// 	return (0);
// }
