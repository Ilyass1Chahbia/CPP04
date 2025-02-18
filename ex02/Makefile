# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilchahbi <ilchahbi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 13:06:00 by ilchahbi          #+#    #+#              #
#    Updated: 2025/02/18 16:51:31 by ilchahbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimals

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp

OBJ = $(SOURCES:.cpp=.opp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.opp: %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)	

fclean: clean
	@rm -rf $(NAME)

re: fclean all