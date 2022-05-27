/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_stackoveflow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:40:16 by nguiard           #+#    #+#             */
/*   Updated: 2022/05/27 13:44:06 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	char	tab1[4] = "Bon";
	char	tab2[5] = "jour";

	fonction_douteuse(tab1);
}