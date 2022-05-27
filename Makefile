# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 15:14:23 by nguiard           #+#    #+#              #
#    Updated: 2022/05/27 15:26:52 by nguiard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: 1 2 3 4 5

1:
	gcc -g 1_stack_frame.c -o stack_frame.out

2:
	gcc 2_stack_and_heap.c -o stack_and_heap.out

3:
	gcc 3_heap_and_stack_limits.c -o smashing.out

4:
	gcc 4_stackoverflow.c -o stackoverflow.out

5:
	gcc 5_heapoverflow.c -o heapoverflow.out

fsan:
	gcc 4_stackoverflow.c -g -fsanitize=address -o stackoverflow.out
	gcc 5_heapoverflow.c -g -fsanitize=address -o heapoverflow.out

clean:
	rm -f *.out
