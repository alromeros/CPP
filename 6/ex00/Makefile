# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/24 14:21:15 by alromero          #+#    #+#              #
#    Updated: 2020/06/24 17:39:30 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Conversor.cpp
OBJ = Conversor.o main.o
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = convert

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)