# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ycoutena <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/13 08:39:23 by ycoutena          #+#    #+#              #
#    Updated: 2018/02/12 08:52:33 by ycoutena         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_SRC		= ./src/
DIR_OBJ		= ./obj/
NAME		= libfts.a

SRCS		= ft_bzero.s ft_cat.s ft_isalnum.s ft_isalpha.s ft_isascii.s	\
			  ft_isdigit.s ft_isprint.s ft_memcpy.s ft_memset.s ft_puts.s	\
			  ft_strcat.s ft_strdup.s ft_strlen.s ft_tolower.s ft_toupper.s	\
			  ft_isspace.s ft_putendl.s ft_putstr.s ft_putstr_fd.s			\
			  ft_strchr.s ft_strrchr.s

ICD			= ./include/libfts.h

OBJ			= $(SRCS:.s=.o)
ALL_OBJ		= $(addprefix $(DIR_OBJ), $(OBJ))
CC			= ~/.brew/bin/nasm

FLAG		= -f macho64


all : createdir $(NAME)

createdir :
		@mkdir -p $(DIR_OBJ)

$(NAME) :  $(ALL_OBJ)
		@echo LIBFTS 
		ar rc $(NAME) $(ALL_OBJ)
		ranlib $(NAME)

$(DIR_OBJ)%.o: $(DIR_SRC)%.s
	$(CC) $(FLAG)  $< -o $@ -I $(ICD) 
clean : 
		rm -rf $(DIR_OBJ)

fclean : clean
		rm -rf $(NAME)

re		: fclean all

.PHONY : all clean fclean re
