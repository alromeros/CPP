# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/09 18:47:12 by alromero          #+#    #+#              #
#    Updated: 2020/05/18 13:40:22 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = megaphone.o
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = megaphone

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)