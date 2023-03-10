# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfusil <mfusil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:25:48 by mfusil            #+#    #+#              #
#    Updated: 2023/03/09 15:42:51 by mfusil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAG = -Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp

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
