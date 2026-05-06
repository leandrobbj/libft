# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 16:04:42 by lbraga            #+#    #+#              #
#    Updated: 2026/05/06 17:22:30 by lbraga           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
HEADER	=	libft.h
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror -I.
LIBC	=	ar rcs
RM		=	rm -rf
OBJ		=	$(SRC:src/%.c=obj/%.o)
OBJB	=	$(SRCB:src/%.c=obj/%.o)
RED			= \033[1;31m
GREEN		= \033[1;32m
CYAN		= \033[0;36m
RESET		= \033[0m

SRC		=	src/ft_atoi.c		src/ft_bzero.c		src/ft_calloc.c		src/ft_isalnum.c \
			src/ft_isalpha.c	src/ft_isascii.c	src/ft_isdigit.c	src/ft_isprint.c \
			src/ft_memchr.c		src/ft_memcmp.c		src/ft_memcpy.c		src/ft_memmove.c \
			src/ft_memset.c		src/ft_strchr.c		src/ft_strdup.c		src/ft_strlcat.c \
			src/ft_strlcpy.c	src/ft_strlen.c		src/ft_strncmp.c	src/ft_strnstr.c \
			src/ft_strrchr.c	src/ft_tolower.c	src/ft_toupper.c	src/ft_substr.c \
			src/ft_strjoin.c	src/ft_strtrim.c	src/ft_split.c		src/ft_itoa.c \
			src/ft_strmapi.c	src/ft_striteri.c	src/ft_putchar_fd.c	src/ft_putstr_fd.c \
			src/ft_putendl_fd.c	src/ft_putnbr_fd.c

SRCB	=	src/ft_lstnew.c		src/ft_lstadd_front.c	src/ft_lstsize.c \
			src/ft_lstlast.c	src/ft_lstadd_back.c	src/ft_lstdelone.c \
			src/ft_lstclear.c	src/ft_lstiter.c		src/ft_lstmap.c

all: $(NAME)
$(NAME): $(OBJ)
	@$(LIBC) $(NAME) $(OBJ)
	@echo "$(GREEN)[$(NAME) created]"

obj/%.o: src/%.c $(HEADER)
	@mkdir -p obj
	@echo "$(CYAN)$<"
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@$(RM) obj
	@echo "$(RED)X objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)X library removed"

re: fclean all

bonus: $(OBJ) $(OBJB)
	@$(LIBC) $(NAME) $(OBJ) $(OBJB)
	@echo "$(GREEN)[$(NAME) created with bonus]"

.PHONY: all clean fclean re bonus
