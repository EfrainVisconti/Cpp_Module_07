# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 13:34:29 by eviscont          #+#    #+#              #
#    Updated: 2024/11/23 13:49:33 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
HDRS = whatever.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re