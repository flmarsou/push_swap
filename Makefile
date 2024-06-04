# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 09:24:46 by flmarsou          #+#    #+#              #
#    Updated: 2024/06/04 15:50:44 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE = push_swap

# Files
SRC =			./src/main.c

SRC_PARSING =	./src/parsing/parser.c \
				./src/parsing/error_message.c \
				./src/parsing/isnumber.c \
				./src/parsing/isduplicate.c \

SRC_UTILS =		./src/utils/ft_countwords.c \
				./src/utils/ft_split.c \
				./src/utils/ft_strcmp.c \

SOURCES =		${SRC} ${SRC_PARSING} ${SRC_UTILS} 
OBJECTS =		${SOURCES:.c=.o}

# Variables
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

DEF_COLOR = \e[0;39m
COLOR = \e[1;32m

# Makefile
all:		${EXE}

${EXE}:		${OBJECTS}
		@${CC} ${CFLAGS} ${OBJECTS} -o ${EXE}

clean:
		@${RM} ${OBJECTS}

fclean:		clean
		@${RM} ${EXE}

re:			fclean all

.PHONY: all clean fclean re
