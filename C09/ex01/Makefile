# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 10:55:19 by taeheoki          #+#    #+#              #
#    Updated: 2021/03/15 19:37:34 by taeheoki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
TARGET	=	libft.a
SRCDIR	=	srcs
INCDIR	=	includes
SRCS	=	$(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(TARGET) : $(OBJS)
	ar -cr $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : fclean all
