# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eviscont <eviscont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/24 21:14:22 by eviscont          #+#    #+#              #
#    Updated: 2024/11/26 16:11:58 by eviscont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
HDRS = Array.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HDRS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re