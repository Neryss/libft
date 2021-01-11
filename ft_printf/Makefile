# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckurt <ckurt@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/12 17:39:37 by ckurt             #+#    #+#              #
#    Updated: 2021/01/11 13:47:13 by ckurt            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

_END=\033[0m
_BOLD=\033[1m
_UNDER=\033[4m
_REV=\033[7m

_RED=\033[31m
_GREEN=\033[32m
_YELLOW=\033[33m
_BLUE=\033[34m
_PURPLE=\033[35m
_CYAN=\033[36m
_WHITE=\033[37m

_IGREY=\033[40m
_IRED=\033[41m
_IGREEN=\033[42m
_IYELLOW=\033[43m
_IBLUE=\033[44m
_IPURPLE=\033[45m
_ICYAN=\033[46m
_IWHITE=\033[47m

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
NAME = libftprintf.a
SRCS = src/ft_printf.c \
		src/ft_printf_utils.c \
		src/ft_print_char.c \
		src/ft_print_str.c \
		src/ft_print_p.c \
		src/ft_print_x.c \
		src/ft_print_di.c \
		src/ft_print_u.c \
		src/ft_print_percent.c \
		src/ft_printp_utils.c \
		src/ft_print_di_utils.c \
		src/ft_checks.c 
OBJS = $(SRCS:.c=.o)

.c.o:
	@printf "$(_CYAN) [+] $(_END) Compiling $(_BLUE)owo $(_END)$<\n" | tr "lr" "w"
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) 

all: $(NAME)

$(NAME): $(OBJS)
	@cp ../libft.a libftprintf.a
	@$(LIBC) $(NAME) $(OBJS)
	@cp $(NAME) ../libft.a

test: $(NAME)
	$(CC) -L ./ $(NAME) src/main_printf.c && ./a.out

debug: $(NAME)
	$(CC) -g -L ./ $(NAME) src/main_printf.c && lldb a.out

re: fclean
	@$(MAKE) all

clean:
	@rm -rf $(OBJS)
	@printf "$(_RED) [-] $(_END) Deleted objs\n"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf libft.a

.PHON: clean fclean re all