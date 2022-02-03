SRCS	= ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \
			main.cpp
HEADERS	= ClapTrap.hpp \
			ScavTrap.hpp \
			FragTrap.hpp \
			DiamondTrap.hpp
OBJS	= ${SRCS:.cpp=.o}

NAME	= DiamondTrap

CC		= c++

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -std=c++98

%.o : %.cpp ${HEADERS}
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${HEADERS}
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY: all
all:		${NAME}

.PHONY: clean
clean:
			${RM} ${OBJS}
.PHONY: fclean
fclean:		clean
			${RM} ${NAME}
.PHONY: re
re:			fclean all%