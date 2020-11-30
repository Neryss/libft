# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 13:34:22 by ckurt             #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2020/11/30 17:47:58 by ckurt            ###   ########lyon.fr    #
=======
#    Updated: 2020/11/28 16:33:29 by ckurt            ###   ########lyon.fr    #
>>>>>>> 4f87a64ccbfd1daafb917b1a6b02de588837bbf1
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCS = libft.h
LIBC = ar rcs
NAME = libft.a
SRCS = ft_memset.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_strjoin.c \
		ft_putchar_fd.c \
		ft_putchar.c \
		ft_putstr_fd.c \
		ft_putstr.c \
		ft_putendl_fd.c \
		ft_putendl.c \
		ft_putnbr_fd.c \
		ft_putnbr.c \
		ft_split.c \
		ft_substr.c \
		ft_strtrim.c\
		ft_itoa.c \
		ft_strmapi.c \
		ft_check_whitespaces.c \
		ft_strcat.c \
<<<<<<< HEAD
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstclear.c \
		ft_freeal.c
=======
		ft_freeall.c \
		ft_split_charset.c \
		ft_foreach.c \
		ft_strncat.c \
		
BONUS_SRC = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstclear_bonus.c
>>>>>>> 4f87a64ccbfd1daafb917b1a6b02de588837bbf1
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(INCS)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean re all