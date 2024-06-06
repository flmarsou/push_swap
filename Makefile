# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 09:24:46 by flmarsou          #+#    #+#              #
#    Updated: 2024/06/06 09:36:00 by flmarsou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program Executable
EXE = push_swap

# Files
SRC =			./src/main.c

SRC_PARSING =	./src/parsing/parser.c \
				./src/parsing/isnumber.c \
				./src/parsing/isduplicate.c \
				./src/parsing/isoverflow.c \

SRC_UTILS =		./src/utils/ft_countwords.c \
				./src/utils/ft_split.c \
				./src/utils/ft_strcmp.c \

SOURCES =		${SRC} ${SRC_PARSING} ${SRC_UTILS} 
OBJECTS =		${SOURCES:.c=.o}

# Variables
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

# Colors
GREEN	= \e[1;32m
ORANGE	= \e[1;91m
_ORANGE	= \e[1;4;91m
WHITE	= \e[0m

# Makefile
all:		${EXE}

${EXE}:		${OBJECTS}
		@${CC} ${CFLAGS} ${OBJECTS} -o ${EXE}
		@echo "${ORANGE}[!] - ${_ORANGE}Push Swap Compiled!${WHITE}"

%.o:		%.c
		@${CC} ${CFLAGS} -c $? -o $@
		@echo "${GREEN}[✓] - $?${WHITE}"

clean:
		@${RM} ${OBJECTS}
		@echo "${ORANGE}[!] - ${_ORANGE}Push Swap Cleaned!${WHITE}"

fclean: clean
		@${RM} ${OBJECTS} ${EXE}
re:			fclean all

.PHONY: all clean fclean re
