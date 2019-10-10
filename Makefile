# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danli <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 16:15:34 by danli             #+#    #+#              #
#    Updated: 2019/10/08 11:18:11 by danli            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIBNAMES = $(FNAMES) $(BNAMES)

FNAMES = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit \
	   ft_isprint ft_itoa ft_lstadd ft_lstdel ft_lstdelone ft_lstiter \
	   ft_lstmap ft_lstnew ft_memalloc ft_memccpy ft_memchr ft_memcpy \
	   ft_memcmp ft_memdel ft_memmove ft_memset ft_putchar ft_putchar_fd \
	   ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd \
	   ft_strcat ft_strchr ft_strclr ft_strcmp ft_strcpy ft_strdel ft_strdup \
	   ft_strequ ft_striter ft_striteri ft_strjoin ft_strlcat ft_strlen \
	   ft_strmap ft_strmapi ft_strncat ft_strncmp ft_strncpy ft_strnequ \
	   ft_strnew ft_strnstr ft_strrchr ft_strsplit ft_strstr ft_strsub \
	   ft_strtrim ft_tolower ft_toupper ft_itoa

BNAMES = ft_countwords ft_strndup ft_numdigits ft_isspace ft_strsplitchrset
CFILES = $(addsuffix .c, $(LIBNAMES))
OFILES = $(addsuffix .o, $(LIBNAMES))
CC = gcc -Wall -Werror -Wextra
SRC = .
INCLUDES= .

.PHONY: all
all: $(NAME)

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

.PHONY: objects
objects: $(CFILES)
	$(CC) -c -I$(INCLUDES) $(addprefix $(SRC)/,$(CFILES))

.PHONY: clean
clean:
	/bin/rm -f $(OFILES)

.PHONY: fclean
fclean: clean
	/bin/rm -f $(NAME)

.PHONY: re
re: fclean $(NAME)
