SRCS		=	ft_itoa.c			\
				ft_printf.c			\
				ft_putnbr_hexa.c	\
				ft_strlen.c			\
		   		ft_putstr.c			\
		 		print_pc.c			\
		   		print_x.c			\
				print_d.c			\
				print_c.c			\
			 	print_p.c			\
			  	print_s.c			\
			   	print_x_maj.c		\

NAME		=	libftprintf.a

OBJ			=	$(SRCS:.c=.o)

DEP			= 	$(SRCS:%.c=%.d)

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)
$(OBJ)		:
				gcc -Wall -Wextra -Werror -MP -MMD -c $(SRCS)

clean		:
				rm -f $(OBJ)
				rm -f $(DEP)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

-include $(DEP)

.PHONY		:	all clean fclean re
