# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/26 18:09:32 by omakovsk          #+#    #+#              #
#    Updated: 2017/12/19 11:42:45 by omakovsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra -c

SRC = ft_printf.c ft_memcpy.c ft_strlen.c ft_strcpy.c ft_atoi.c ft_isalpha.c\
	  ft_isdigit.c ft_memalloc.c ft_strclr.c ft_strncmp.c ft_strjoin.c\
	  ft_itoa.c ft_putchar.c ft_putstr.c ft_prnt_itoa_sizet.c ft_prnt_itoa_uintmax.c\
	  ft_prnt_itoa_intmax.c ft_prnt_itoall.c ft_prnt_itoaull.c ft_prnt_itoas.c\
	  ft_prnt_itoaus.c ft_prnt_strstr.c ft_prnt_strjoin_prsn.c ft_prnt_strjoin_width.c\
	  ft_prnt_replace_spc.c ft_prnt_strjoin_smb.c ft_prnt_add_zero.c\
	  ft_prnt_space_flag.c ft_printf.c ft_prnt_itoaui.c ft_prnt_itoaui_octhex.c\
	  ft_prnt_itoaus_octhex.c ft_prnt_itoaull_octhex.c ft_prnt_itoauimax_octhex.c\
	  ft_prnt_smsharp.c ft_prnt_bgsharp.c ft_prnt_prs_str.c ft_prnt_addsharp.c\
	  ft_prnt_memmaloc.c ft_prnt_sharp_p.c size_spec_hh.c size_spec_ll.c\
	  size_spec_h.c size_spec_l.c size_spec_j.c size_spec_z.c use_ss_long.c\
	  use_ss_short.c check_size_spec.c check_char.c check_precision.c\
	  count_precision.c check_min_width.c

OBJ	= $(SRC:.c=.o)

all: $(SRC) $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo compilation done =\)

%.o: %.c
	@gcc $(FLAGS) $<

clean:
	@rm -rf $(OBJ)
	@echo object files deleted -_-

fclean: clean
	@rm -rf $(NAME)
	@echo libftprintf.a deleted -_-

re: fclean all


.PHONY: clean fclean all re
