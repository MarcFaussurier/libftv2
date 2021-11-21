# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 17:16:43 by mafaussu          #+#    #+#              #
#    Updated: 2021/11/21 17:39:55 by mafaussu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME    := libft
RM      := rm -rf
CC      := gcc
CX		:= g++
AR		:= ar -rcs
CFLAGS  := -Werror -Wextra -Wall -I. #-g -fsanitize=address
CSRC    := $(shell ls ft_*.c)
COBJ	:= $(CSRC:.c=.o)
.SUFFIXES:
all:		$(NAME)
%.o:		%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME):	$(COBJ)
	$(AR) $(NAME) $(COBJ)
bonus:
test:		$(NAME)
	$(CX) -I. test.c++ $(NAME) && ./a.out
clean:
	$(RM) $(COBJ)
fclean:		clean
	$(RM) $(NAME)
re:			fclean all
.PHONY:
		all fclean clean re
