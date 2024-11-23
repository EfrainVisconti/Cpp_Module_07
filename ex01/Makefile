# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/23 17:48:03 by eviscont          #+#    #+#              #
#    Updated: 2024/11/23 17:48:24 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
HDRS = iter.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re