/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_heap_and_stack_limits.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:31:03 by nguiard           #+#    #+#             */
/*   Updated: 2022/05/27 15:28:17 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define MEMORY	10000

void	stack_smashing(unsigned long i)
{
	char	tab[MEMORY];
	printf("STACK: %p: %ld\n",tab, i * MEMORY);
	stack_smashing(i + 1);
}

void	heap_smashing(unsigned long i)
{
	char	*tab = malloc(MEMORY);
	printf("HEAP: %p: %ld\n",tab,  i * MEMORY);
	heap_smashing(i + 1);
}

int main(void)
{
	//stack_smashing(1);
	heap_smashing(1);
}
