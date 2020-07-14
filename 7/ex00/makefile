# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 20:06:58 by alromero          #+#    #+#              #
#    Updated: 2020/06/25 20:27:06 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = whatever.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = whatever

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)
