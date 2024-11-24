# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 21:14:22 by eviscont          #+#    #+#              #
#    Updated: 2024/11/24 21:14:24 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
HDRS = Array.hpp Array.tpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re