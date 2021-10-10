/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 03:59:38 by coder             #+#    #+#             */
/*   Updated: 2021/10/10 04:49:37 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_prhex(int x)
{
	int	div;
	int	rm;

	div = 0;
	rm = 0;
	if (x < 10)
	{
		x += 48;
		write(1, &x, 1);
	}
	else
	{
		div = (x / 10) + 48;
		rm = (x % 10) + 48;
		x = div + rm;
		write(1, &x, 1);
	}
}

void	ft_hexcon(char c)
{
	int	div;
	int	rm;

	div = 0;
	rm = 0;
	if (c < 10)
	{
		write(1, "\\", 1);
		write(1, "0", 1);
		c += 48;
		write(1, &c, 1);
	}
	else
	{
		div = c / 16;
		rm = c % 16;
		div += 48;
		write(1, "\\", 1);
		write(1, &div, 1);
		ft_prhex(rm);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
			ft_hexcon(str[count]);
		else
			write(1, &str[count], 1);
		count ++;
	}
}

// int	main(void)
// {
// 	char	str[] = "\n\t\r\e\a\f\v\b Coucou\ntu vas bien ?";

// 	ft_putstr_non_printable(str);
// 	printf("\n");
// 	return (0);
// }
