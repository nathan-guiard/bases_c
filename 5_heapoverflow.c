/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_heapoverflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:04:17 by nguiard           #+#    #+#             */
/*   Updated: 2022/05/27 15:29:28 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	fonction_douteuse(char *str)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		write(1, &(str[i]), 1);
		i++;
	}
}

int	main(void)
{
	char	*tab1 = strdup("Bonjour");

	fonction_douteuse(tab1);
}