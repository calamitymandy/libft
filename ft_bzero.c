/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:38:14 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/09/22 16:09:54 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}

/*int	main(void)
{
	char	s[] = "ceci est un test";

	ft_bzero(s, 2);
	//bzero(s, 3);//
	write(1, s, 6);
	return (0);
}*/
