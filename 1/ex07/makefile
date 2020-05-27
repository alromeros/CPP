# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/25 13:32:12 by alromero          #+#    #+#              #
#    Updated: 2020/05/25 19:54:26 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace
SRC		= main.cpp replace.cpp
CLANG	= clang++
FLAGS	= -Wall -Werror -Wextra
RM 		= rm -f
OBJ		= $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) *.replace */*.replace

fclean:	clean
	$(RM) $(NAME) *.replace */*.replace

re:		fclean $(NAME)

test:		$(NAME)
		./replace test/hola "" ""
		./replace ""	"ee" "ee"
		./replace test/hola	"ee"  "uwu"
		./replace test/prueba "pues eso" "NUEVA STRING"