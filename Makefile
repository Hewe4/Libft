# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ide-ruit <ide-ruit@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:00:49 by ide-ruit          #+#    #+#              #
#    Updated: 2024/02/16 17:13:53 by ide-ruit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
       ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
       ft_putstr_fd.c ft_split.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
       ft_strncmp.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
       ft_strmapi.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_strnstr.c \
       ft_tolower.c ft_toupper.c

BNS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

BNS_OBJS = $(BNS_SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar -src $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BNS_OBJS)
	ar -src $(NAME) $(BNS_OBJS)

clean:
	$(RM) $(OBJS) $(BNS_OBJS)

fclean: clean
	$(RM) $(NAME) test

re: fclean all

.PHONY: all clean fclean re bonus
