/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_stack_frame.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:30:47 by nguiard           #+#    #+#             */
/*   Updated: 2022/05/27 15:24:27 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int main(void)
{
	char	a;
	memset(&a, 0x55, 9);
	a = 'a';
	int		b = 42;
	int		c = 0;
}