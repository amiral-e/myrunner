##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##


### SOURCES ###
#----c_sources----#
SRC			:= printf.c
SRC			+= pf_def.c
#------other------#
OBJ			:= $(SRC:.c=.o)
INC			:= ../include/
### SOURCES ###


### COMPILE_USEFULL ###
#----general_usefull----#
CC			=	gcc
#----project_usefull----#
NAME		=	m_printf.a
MAKEFLAGS 	+=	--no-print-directory
CFLAGS		:=	-Wall -Wextra
#CFLAGS		+=	-Werror
CFLAGS		+=	-iquote $(INC)
### COMPILE_USEFULL ###


all:		$(NAME) clean

$(NAME):	$(OBJ)
			ar -rc ../$(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

re:			clean all

.PHONY:		all clean fclean re