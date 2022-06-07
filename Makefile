# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sthitiku <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 01:59:39 by sthitiku          #+#    #+#              #
#    Updated: 2022/02/27 01:59:39 by sthitiku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB_DIR = libft/

SRCS = ft_isalpha.c ft_isdigit.c ft_strlen.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_toupper.c ft_tolower.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c\
		ft_itoa.c ft_strtrim.c ft_split.c get_next_line.c get_next_line_utils.c

BNS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BNS_OBJS = $(BNS_SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -c $(SRCS) $(BNS_SRCS)
	@ar -rcs $(NAME) $(OBJS) $(BNS_OBJS)

all: $(NAME)

bonus: $(NAME) @$(BNS_OBJS)
	@$(CC) $(CFLAGS) -c $(BNS_SRCS)
	@ar -rcs $(NAME) $(BNS_OBJS)

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all bonus clean fclean re
