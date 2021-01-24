##
## EPITECH PROJECT, 2020
## Untitled (Workspace)
## File description:
## Makefile
##


### SOURCES ###
#----c_sources----#
SRC			:= int/compute/power_rec.c
SRC			+= int/compute/square_root.c
SRC			+= int/find_prime_sup.c
SRC			+= int/atoi.c
SRC			+= int/intlen.c

SRC			+= is/int_prime.c
SRC			+= is/str_alpha.c
SRC			+= is/str_lower.c
SRC			+= is/str_num.c
SRC			+= is/str_numop.c
SRC			+= is/str_upper.c

SRC			+= put/p_char.c
SRC			+= put/p_str.c
SRC			+= put/p_error.c
SRC			+= put/p_nb_bin.c
SRC			+= put/p_nb_un.c
SRC			+= put/p_nb_unhex.c
SRC			+= put/p_nb.c

SRC			+= str/revstr.c
SRC			+= str/strcapitalize.c
SRC			+= str/strcat.c
SRC			+= str/strcmp.c
SRC			+= str/strcpy.c
SRC			+= str/strdup.c
SRC			+= str/strlen.c
SRC			+= str/strlowcase.c
SRC			+= str/strncat.c
SRC			+= str/strncmp.c
SRC			+= str/strstr.c
SRC			+= str/strupcase.c

SRC			+= to/itoa.c
SRC			+= to/itooct.c
#------other------#
OBJ			:= $(SRC:.c=.o)
INC			:= ../include/
### SOURCES ###


### COMPILE_USEFULL ###
#----general_usefull----#
CC			=	gcc
#----project_usefull----#
NAME		=	m_files.a
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