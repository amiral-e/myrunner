##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##


### SOURCES ###
#----c_sources----#
SRC_DIR 	:= ./src/

# runner #
SRC_NAMES	:= run.c
SRC_NAMES	+= end.c
SRC_NAMES	+= free.c
SRC_NAMES	+= init.c
SRC_NAMES	+= key.c
SRC_NAMES	+= mgame.c
SRC_NAMES	+= player.c
SRC_NAMES	+= read.c
SRC_NAMES	+= tools.c

SRC			:= $(addprefix $(SRC_DIR), $(SRC_NAMES))
#------other------#
OBJ			:= $(SRC:.c=.o)
INC			:= -iquote ./include/
LIB			:= -L lib/ -l:m_files.a -l:m_printf.a
### SOURCES ###


### COMPILE_USEFULL ###
#----general_usefull----#
CC			=	gcc
#----project_usefull----#
NAME		=	my_runner
MAKEFLAGS 	+=	--no-print-directory
CFLAGS		:=	-Wall -Wextra
#CFLAGS		+=	-Werror
CFLAGS		+=	$(INC) $(LIB)
CFLAGS		+=	-g3 -l csfml-audio -l csfml-graphics -l csfml-system -l csfml-window
### COMPILE_USEFULL ###


### COLORS ###
ccred		= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[31m $1\033[0m"
ccyellow	= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[33m $1\033[0m"
ccend		= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\033[0m"
### COLORS ###


all:		$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -sC lib/
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)
			@$(call ccend, "Project successfully compiled.")

clean:
			$(MAKE) -sC lib/ clean
			$(RM) -rf $(OBJ) *.gc* *.o vgcore.*
			@$(call ccyellow, "Project cleaned.")

fclean:		clean
			$(MAKE) -sC lib/ fclean
			$(RM) -rf $(NAME) a.out
			@$(call ccred, "Project fully cleaned.")

re:			fclean all

.PHONY:		all clean fclean re