# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msisto <msisto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 11:56:58 by msisto            #+#    #+#              #
#    Updated: 2025/10/27 12:32:25 by msisto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MySed

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SOURCE = MySed.cpp main.cpp \

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
