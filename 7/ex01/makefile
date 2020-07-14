# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 20:26:57 by alromero          #+#    #+#              #
#    Updated: 2020/06/25 20:28:14 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = iter.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = iter

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)