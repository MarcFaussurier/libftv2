# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafaussu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 17:16:43 by mafaussu          #+#    #+#              #
#    Updated: 2021/11/24 17:00:52 by mafaussu         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME    	:= libft.a
RM      	:= rm -rf
CC      	:= gcc
AR			:= ar -rcs
CFLAGS  	:= -Wall -Wextra -Werror #-g -fsanitize=address
CSRC    	:= 	ft_atoi.c           ft_memcmp.c\
				ft_bzero.c			ft_memcpy.c\
				ft_calloc.c        	ft_memmove.c\
				ft_isalnum.c		ft_memset.c\
				ft_isalpha.c		ft_putchar_fd.c\
				ft_isascii.c       	ft_putendl_fd.c\
				ft_isdigit.c		ft_putnbr_fd.c\
				ft_islower.c		ft_putstr_fd.c\
				ft_isprint.c		ft_strchr.c\
				ft_isspace.c        ft_strdup.c\
				ft_isupper.c        ft_striteri.c\
				ft_strlcat.c		ft_strlcpy.c\
				ft_strlen.c			ft_strmapi.c\
				ft_strncmp.c 		ft_strnstr.c\
				ft_strrchr.c		ft_tolower.c\
				ft_toupper.c 		ft_memchr.c\
				ft_substr.c			ft_strtrim_begin.c\
				ft_strtrim_end.c	ft_is_char_in.c\
				ft_strtrim.c		ft_strjoin.c\
				ft_split.c			ft_itoa.c
CBONUSSRC 	:= 	ft_lstadd_back.c	ft_lstadd_front.c\
				ft_lstclear.c		ft_lstdelone.c\
				ft_lstiter.c		ft_lstlast.c\
				ft_lstmap.c			ft_lstnew.c\
				ft_lstsize.c
COBJ		:= $(CSRC:.c=.o)
CBONUSOBJ	:= $(CBONUSSRC:.c=.o)
all:		$(NAME)
%.o:		%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME):	$(COBJ)
	$(AR) $(NAME) $(COBJ)
bonus: 		$(NAME) $(CBONUSOBJ)
	$(AR) $(NAME) $(CBONUSOBJ)
clean:
	$(RM) $(COBJ) $(CBONUSOBJ)
fclean:		clean
	$(RM) $(NAME)
re:			fclean all
.PHONY:
		all bonus fclean clean re
