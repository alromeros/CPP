# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/13 20:09:08 by alromero          #+#    #+#              #
#    Updated: 2020/05/18 13:41:16 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp
OBJS			= main.o
CLANG			= clang++
RM				= rm -f
CLANGFLAGS		= -Wall -Wextra -Werror -I.
NAME			= awesome_phoneBook
all:			$(NAME)
$(NAME):		$(OBJS)
				$(CLANG) $(CLANGFLAGS) -o $(NAME) $(OBJS)
clean:
				$(RM) $(OBJS)
fclean:			clean
				$(RM) $(NAME)
re:				fclean $(NAME)
