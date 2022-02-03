SRCS	= megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}

NAME	= megaphone

CC		= clang++ -std=c++98

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

%.o : %.cpp
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS}

.PHONY: all
all:		${NAME}	

.PHONY: clean
clean:	
			${RM} ${OBJS}
.PHONY: fclean
fclean:		clean
			${RM} ${NAME}
.PHONY: re
re:			fclean all
	