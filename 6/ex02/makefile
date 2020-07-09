# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/25 19:24:34 by alromero          #+#    #+#              #
#    Updated: 2020/06/25 19:25:54 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp A.cpp B.cpp C.cpp Identify.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -f
CC = clang++
CFLAGS = -Wall -Werror -Wextra
NAME = identify

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean:	clean
	$(RM) $(NAME)
re: fclean $(NAME)