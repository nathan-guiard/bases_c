/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_stack_and_heap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:23:27 by nguiard           #+#    #+#             */
/*   Updated: 2022/05/27 13:27:43 by nguiard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*heap(void);
int	*stack(void);

int main(void)
{
	int	*ptr;

	ptr = heap();
	*ptr = 5;
	ptr = stack();
	*ptr = 10;
}

int    *heap(void)
{
    int    *b;
	b = malloc(sizeof(*b));
	return (b);
}

int    *stack(void)
{
    int    a;
    return (&a);
}
