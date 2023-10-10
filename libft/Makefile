# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 06:10:49 by amiguez           #+#    #+#              #
#    Updated: 2022/10/23 10:18:17 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# **************************************************************************** #
DIR_SRC :=	srcs
DIR_OBJ :=	.objs
DIR_INC :=	includes
# **************************************************************************** #
DIR_BOOL := bool
DIR_LST := lst
DIR_MEM := mem
DIR_PRINT := print
DIR_CONV := conv
# **************************************************************************** #
LST_SRCS :=	ft_bzero.c\
			ft_calloc.c\
			ft_split.c\
			ft_new_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_tabdup.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c\
			get_next_line.c\
			ft_search.c\
			ft_free.c
LST_OBJS :=	$(LST_SRCS:.c=.o)

BOOL	:=	ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c
LST_BOOL :=	$(addprefix $(DIR_BOOL)/,$(BOOL))
SRC_BOOL := $(addprefix $(DIR_SRC)/,$(LST_BOOL))
OBJ_BOOL :=	$(addprefix $(DIR_OBJ)/,$(LST_BOOL:.c=.o))

LST		:=	ft_lstadd_front.c\
			ft_lstadd_back.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\
			ft_lstmap.c\
			ft_lstnew.c
LST_LST :=	$(addprefix $(DIR_LST)/,$(LST))
SRC_LST :=	$(addprefix $(DIR_SRC)/,$(LST_LST))
OBJ_LST :=	$(addprefix $(DIR_OBJ)/,$(LST_LST:.c=.o))

MEM		:=	ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c
LST_MEM :=	$(addprefix $(DIR_MEM)/,$(MEM))
SRC_MEM :=	$(addprefix $(DIR_SRC)/,$(LST_MEM))
OBJ_MEM :=	$(addprefix $(DIR_OBJ)/,$(LST_MEM:.c=.o))

PRINT :=	ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_put_unnbr_fd.c\
			ft_printf.c
LST_PRINT :=	$(addprefix $(DIR_PRINT)/,$(PRINT))
SRC_PIRNT :=	$(addprefix $(DIR_SRC)/,$(LST_PRINT))
OBJ_PRINT :=	$(addprefix $(DIR_OBJ)/,$(LST_PRINT:.c=.o))

CONV	:=	ft_atoi.c\
			ft_itoa.c
LST_CONV :=	$(addprefix $(DIR_CONV)/,$(CONV))
SRC_CONV :=	$(addprefix $(DIR_SRC)/,$(LST_CONV))
OBJ_CONV :=	$(addprefix $(DIR_OBJ)/,$(LST_CONV:.c=.o))
# **************************************************************************** #
LST_INCS :=	libft.h
# **************************************************************************** #
SRCS	:=	$(addprefix $(DIR_SRC)/,$(LST_SRCS)) $(SRC_BOOL) $(SRC_LST) $(SRC_MEM) $(SRC_PRINT) $(SRC_CONV)
OBJS	:=	$(addprefix $(DIR_OBJ)/,$(LST_OBJS)) $(OBJ_BOOL) $(OBJ_LST) $(OBJ_MEM) $(OBJ_PRINT) $(OBJ_CONV)
INCS	:=	$(addprefix $(DIR_INC)/,$(LST_INCS))
# **************************************************************************** #
ERASE	=	\033[2K\r
GREY	=	\033[30m
RED		=	\033[31m
GREEN	=	\033[32m
YELLOW	=	\033[33m
BLUE	=	\033[34m
PINK	=	\033[35m
CYAN	=	\033[36m
WHITE	=	\033[37m
BOLD	=	\033[1m
UNDER	=	\033[4m
SUR		=	\033[7m
END		=	\033[0m
# **************************************************************************** #
NORMITEST = 
NORMINETTE = $(shell norminette $(SRCS) | grep -i 'Error!')
# **************************************************************************** #
# /////////////////////////////////
CC		:= gcc
CFLAGS	:= -Wall -Werror -Wextra
AR		:= ar rcs
# /////////////////////////////////

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	printf "$(ERASE)Compiling Libft : $(GREEN) Done $(END)\n"

ifeq ($(NORMINETTE),$(NORMITEST))
	printf "$(GREEN)Everything is ok\n$(END)"
else
	printf "$(RED)$(SUR)THERE IS AN ERROR WITH NORMINETTE IN LIBFT FILES !!\n $(NORMINETTE)$(END)"
endif

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c $(INCS) Makefile | $(DIR_OBJ)
	$(CC) $(CFLAGS) -I$(DIR_INC) -c $< -o $@
	printf "$(ERASE)Compiling $(NAME) : $(BLUE) $< $(END)"

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)
	mkdir -p $(DIR_OBJ)/$(DIR_BOOL)
	mkdir -p $(DIR_OBJ)/$(DIR_LST)
	mkdir -p $(DIR_OBJ)/$(DIR_MEM)
	mkdir -p $(DIR_OBJ)/$(DIR_PRINT)
	mkdir -p $(DIR_OBJ)/$(DIR_CONV)

# /////////////////////////////////

clean	:
	rm -rf $(DIR_OBJ)
	printf "$(CYAN) /!\ $(END)Erasing .o in libft$(CYAN) /!\ \n$(END)"

fclean	: clean
	rm -rf $(NAME)
	printf "$(RED) /!\ $(END)Erasing libft.a$(RED) /!\ \n$(END)"
re		: fclean all

debug	: all
	$(CC) main.c $(NAME)

# /////////////////////////////////

.PHONY	: all clean fclean re debug $(DIR_OBJ)
.SILENT	:
