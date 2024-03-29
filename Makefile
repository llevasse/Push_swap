# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llevasse <llevasse@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 17:00:51 by llevasse          #+#    #+#              #
#    Updated: 2023/06/29 09:48:21 by llevasse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS			= -Wall -Wextra -Werror -g -I $(INC_DIR) -D CAN_PRINT=1

FILES			= 	srcs/push_swap.c \
					srcs/instruction/ft_push.c \
					srcs/instruction/push.c \
					srcs/instruction/ft_rotate.c \
					srcs/instruction/rotate.c \
					srcs/instruction/ft_reverse_rotate.c \
					srcs/instruction/reverse_rotate.c \
					srcs/instruction/ft_swap.c \
					srcs/instruction/swap.c \
					srcs/sort/little_sort.c \
					srcs/sort/medium_sort.c \
					srcs/sort/radix.c \
					srcs/utils/push_swap_utils.c \
					srcs/utils/get_elem.c \
					srcs/utils/init.c \
					srcs/utils/init_simple.c \
					srcs/utils/check_int.c \
					srcs/utils/print_inst.c


INC_DIR			= includes/

LIBFT			= libft/libft.a

OBJS			= ${FILES:.c=.o} ${LIBFT_FILES:.c=.o}

RED				=	\033[0;31m
GREEN			=	\033[0;32m
NC				=	\033[0m

NAME			= push_swap

%.o:			%.c $(LIBFT) Makefile includes/push_swap.h
					cc ${FLAGS} -c $< -o ${<:.c=.o}
				
${NAME}:		libft ${OBJS} includes/push_swap.h Makefile
					cc $(FLAGS) $(OBJS) $(LIBFT) -o $(NAME)
					@echo "$(GREEN)All files compiled succesfully :D$(NC)"
					@norminette $(INC_DIR)*.h | awk '$$NF!="OK!" {print "$(RED)" $$0 "$(NC)"}'
					@norminette $(FILES) | awk '$$NF!="OK!" {print "$(RED)" $$0 "$(NC)"}'
					@norminette libft/ | awk '$$NF!="OK!" {print "$(RED)" $$0 "$(NC)"}'

$(LIBFT)::
				@make -sC libft

all:			${NAME}

clean:
					@make -sC libft clean
					rm -f ${OBJS}
					@echo "$(GREEN)All object files deleted succesfully :D$(NC)"

fclean:			clean
					@make -sC libft fclean
					rm -f ${NAME} $(NAME)
					@echo "$(GREEN)All exec files deleted succesfully :D$(NC)"

re:				fclean all

.PHONY:			all clean fclean re
