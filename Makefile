# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kotatabe <kotatabe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/04 16:41:09 by ktabe             #+#    #+#              #
#    Updated: 2020/12/03 15:28:10 by kotatabe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_mini_ls
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCS = -I ft_mini_ls.h
SRCS = ft_mini_ls.c print_error.c
OBJS = $(SRCS:.c=.o)

LIBS = libft/libft.a
LIBSRCS = libft/*.c
LIBOBJS = $(LIBSRCS:.c=.o)

$(NAME): $(OBJS) $(LIBSRCS)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBS) $(INCS)

all : $(NAME)

clean :
	rm -f $(OBJS) $(LIBOBJS)

fclean : clean
	rm -f $(NAME) $(LIBS)

re : fclean all

.PHONY: all clean fclean re