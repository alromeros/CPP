# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 18:05:12 by alromero          #+#    #+#              #
#    Updated: 2020/06/25 18:18:56 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Serialize.cpp
OBJ = Serialize.o main.o
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = serialize

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)