# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kisikaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 20:51:10 by kisikaya          #+#    #+#              #
#    Updated: 2021/12/07 20:51:12 by kisikaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re bonus

CC = gcc
LC = ar -rcs
INC_PATH=./
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRC    =    ft_isalpha.c \
            ft_isdigit.c \
            ft_isalnum.c \
            ft_isascii.c \
            ft_isprint.c \
            ft_strlen.c \
            ft_memset.c \
            ft_bzero.c \
            ft_memcpy.c \
            ft_memmove.c \
            ft_strlcpy.c \
            ft_strlcat.c \
            ft_toupper.c \
            ft_tolower.c \
            ft_strchr.c \
            ft_strrchr.c \
            ft_strncmp.c \
            ft_memchr.c \
            ft_memcmp.c \
            ft_strnstr.c \
            ft_atoi.c \
            ft_calloc.c \
           	ft_strdup.c \
            ft_substr.c \
            ft_strjoin.c \
            ft_strtrim.c \
            ft_split.c \
            ft_itoa.c \
            ft_strmapi.c \
            ft_striteri.c \
            ft_putchar_fd.c \
          	ft_putstr_fd.c \
            ft_putendl_fd.c \
           	ft_putnbr_fd.c

BONUS_S  =  ft_lstnew.c \
            ft_lstadd_front.c \
           	ft_lstsize.c \
            ft_lstlast.c  \
            ft_lstadd_back.c \
            ft_lstdelone.c \
            ft_lstclear.c \
            ft_lstiter.c \
            ft_lstmap.c
OBJ = $(SRC:.c=.o)
BONUS = $(BONUS_S:.c=.o)
INCLUDES = libft.h


all : $(NAME)

$(NAME) : $(OBJ)
	$(LC) $@ $^  

$(OBJ) : $(INC_PATH)$(INCLUDES)

$(BONUS) : $(INC_PATH)$(INCLUDES)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC_PATH) 


clean : 
	rm -f $(OBJ) $(BONUS)
fclean : clean
	rm -f $(NAME)
bonus : $(BONUS)
	$(LC) $(NAME) $^

re : fclean all

