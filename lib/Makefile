##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##


### SOURCES ###
#----c_sources----#
MF_DIR 		:= ./m_files/
PF_DIR		:= ./m_printf/
MF_NAME		:= m_files.a
PF_NAME		:= m_printf.a
#------other------#
#OBJ			:= $(SRC:.c=.o)
#INC			:= ./include/
### SOURCES ###


### COMPILE_USEFULL ###
#----general_usefull----#
CC			=	gcc
#----project_usefull----#
MAKEFLAGS 	+=	--no-print-directory
CFLAGS		:=	-Wall -Wextra
#CFLAGS		+=	-Werror
#CFLAGS		+=	-iquote $(INC)
### COMPILE_USEFULL ###

all:
			$(MAKE) -sC $(MF_DIR)
			$(MAKE) -sC $(PF_DIR)

clean:
			$(RM) $(MF_NAME) $(PF_NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re