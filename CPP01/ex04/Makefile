# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msisto <msisto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 11:56:58 by msisto            #+#    #+#              #
#    Updated: 2025/09/05 11:09:12 by msisto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

CC = g++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SOURCE = $(wildcard *.cpp) \

OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@g++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all
