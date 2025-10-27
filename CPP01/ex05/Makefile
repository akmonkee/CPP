# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msisto <msisto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/17 11:43:13 by msisto            #+#    #+#              #
#    Updated: 2025/10/27 12:32:38 by msisto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SOURCE = Harl.cpp main.cpp \

OBJS = $(SOURCE:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all
