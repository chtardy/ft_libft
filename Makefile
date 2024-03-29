NAME 	= libft.a
FILES	= 	ft_atoi			\
			ft_bzero		\
			ft_calloc		\
			ft_isalnum		\
			ft_isalpha		\
			ft_isascii		\
			ft_isdigit		\
			ft_isprint		\
			ft_memchr		\
			ft_memcmp		\
			ft_memcpy		\
			ft_memmove		\
			ft_memset		\
			ft_strchr		\
			ft_strdup		\
			ft_strlcat		\
			ft_strlcpy		\
			ft_strlen		\
			ft_strncmp		\
			ft_strnstr		\
			ft_strrchr		\
			ft_tolower		\
			ft_toupper		\
			ft_substr		\
			ft_strjoin		\
			ft_strtrim		\
			ft_split		\
			ft_itoa			\
			ft_strmapi		\
			ft_striteri		\
			ft_putchar_fd	\
			ft_putstr_fd	\
			ft_putendl_fd	\
			ft_putnbr_fd	


FILES_B =	ft_lstnew		\
	  		ft_lstadd_front	\
			ft_lstsize		\
			ft_lstlast		\
			ft_lstadd_back	\
	  		ft_lstdelone	\
	  		ft_lstclear		\
	  		ft_lstiter		\
	  		ft_lstmap

			

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} 	:	${OBJS}
				ar rcs ${NAME} ${OBJS}
				
bonus:			$(OBJS_B)
				ar rcs $(NAME) ${OBJS_B}

all			:	${NAME}

clean		:
				rm -rf ${OBJS} ${OBJS_B}
fclean 		:	clean
				rm -rf ${NAME}
re 			:	fclean all

.PHONY: clean re all fclean bonus
