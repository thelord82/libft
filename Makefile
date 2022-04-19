# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malord <malord@student.42quebec.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 09:39:10 by malord            #+#    #+#              #
#    Updated: 2022/04/19 11:03:23 by malord           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
RM			=	rm -rf

SRCS		=	ft_atoi.c				\
				ft_bzero.c				\
				ft_calloc.c				\
				ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_isdigit.c			\
				ft_isprint.c			\
				ft_itoa.c				\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memmove.c			\
				ft_memset.c				\
				ft_putchar_fd.c			\
				ft_putendl_fd.c			\
				ft_putnbr_fd.c			\
				ft_putstr_fd.c			\
				ft_split.c				\
				ft_strchr.c				\
				ft_strdup.c				\
				ft_striteri.c			\
				fT_strjoin.c			\
				ft_strlcat.c			\
				ft_strlcpy.c			\
				ft_strlen.c				\
				ft_strmapi.c			\
				ft_strncmp.c			\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strtrim.c			\
				ft_substr.c				\
				ft_tolower.c			\
				ft_toupper.c

BSRCS		=	ft_lstlast.c			\
				ft_lstadd_back.c		\
				ft_lstadd_front.c		\
				ft_lstclear.c			\
				ft_lstdelone.c			\
				ft_lstnew.c				\
				ft_lstiter.c			\
				ft_lstmap.c				\
				ft_lstsize.c

OBJS		= 	${SRCS:.c=.o}
BOBJS		=	${BSRCS:.c=.o}

# Targets
all: $(NAME) clean

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	@$(CC) -c $(CFLAGS) $(SRCS)

# Removes objects
clean:
	@$(RM) $(OBJS) $(BOBJS)

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all

# Bonus points
bonus: $(NAME) $(BOBJS)
	@ar -crs $(NAME) $(BOBJS)
	@$(CC) -c $(CFLAGS) $(BSRCS)

cleanbs: clean
	@$(RM) $(BOBJS)