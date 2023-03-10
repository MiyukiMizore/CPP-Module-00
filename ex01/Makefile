# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 18:25:57 by mfusil            #+#    #+#              #
#    Updated: 2023/03/10 16:51:13 by mfusil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAG = -Wall -Wextra -Werror -std=c++98 -g3

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

.c.o:
	@g++  $(CFLAG) -o $@ -c $<

$(NAME) : $(OBJS)
		@g++ $(CFLAG) -o $(NAME) $(OBJS)
		@echo "$(GREEN)$(BOLD)Executable Created"

clean :
		@rm -rf $(OBJS)
		@echo "$(GREEN)$(BOLD)Objects removed"

fclean : clean
		@rm -rf $(NAME)
		@echo "$(GREEN)$(BOLD)Executable removed"

re : fclean all

#----------------------COLORS----------------------
GREEN=\x1b[32m
BOLD=\033[1m

.PHONY: all clean fclean re