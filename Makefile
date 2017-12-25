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

SRC = ft_printf.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c\
	  ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c\
	  ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c\
	  ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c\
	  ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c\
	  ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c\
	  ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c\
	  ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c\
	  ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c\
	  ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_putnbr_fd.c ft_lstadd.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c\
	  ft_lstnew.c ft_lstmap.c ft_mycount_words.c ft_myrev.c ft_myintiter.c\
	  ft_myfactor.c ft_mypower.c ft_prnt_itoa_sizet.c ft_prnt_itoa_uintmax.c\
	  ft_prnt_itoa_intmax.c ft_prnt_itoall.c ft_prnt_itoaull.c ft_prnt_itoas.c\
	  ft_prnt_itoaus.c ft_prnt_strstr.c ft_prnt_strjoin_prsn.c ft_prnt_strjoin_width.c\
	  ft_prnt_replace_spc.c ft_prnt_strjoin_smb.c ft_prnt_add_zero.c\
	  ft_prnt_space_flag.c ft_printf.c ft_prnt_itoaui.c ft_prnt_itoaui_octhex.c\
	  ft_prnt_itoaus_octhex.c ft_prnt_itoaull_octhex.c ft_prnt_itoauimax_octhex.c\
	  ft_prnt_smsharp.c ft_prnt_bgsharp.c ft_prnt_prs_str.c ft_prnt_addsharp.c\
	  ft_prnt_memmaloc.c ft_prnt_sharp_p.c

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
