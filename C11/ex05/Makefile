# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 10:55:19 by taeheoki          #+#    #+#              #
#    Updated: 2021/03/17 16:34:31 by taeheoki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
TARGET	=	do-op
SRCDIR	=	srcs
INCDIR	=	includes
SRCS	=	$(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_atoi.c $(SRCDIR)/ft_operator.c $(SRCDIR)/main.c
OBJS	=	$(SRCS:.c=.o)
RM		=	rm -f

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCDIR)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(TARGET)

re : fclean all
