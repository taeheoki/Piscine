# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taeheoki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/14 10:31:05 by taeheoki          #+#    #+#              #
#    Updated: 2021/03/14 11:48:53 by taeheoki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
TARGET	= rush-02
CFLAGS	= -Wall -Wextra -Wextra
SRCDIR	= srcs
INCDIR 	= includes
SRCS	= $(wildcard $(SRCDIR)/*.c)
OBJS	= $(SRCS:.c=.o)
RM		= rm -f

all			: $(TARGET)

%.o			: %.c
			$(CC) $(CFLAGS) -c $< -o  $@ -I $(INCDIR)

$(TARGET)	: $(OBJS)
			$(CC) $(CFLAGS) -o $@ $^

clean		:
			$(RM) $(OBJS)

fclean		: clean
			$(RM) $(TARGET)

re			: fclean all
