NAME = interface
SRC			=	main.cpp \
				AMateria.cpp \
				Character.cpp \
				Cure.cpp \
				Ice.cpp \
				Fire.cpp \
				Flash.cpp \
				MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	${CC} ${CFLAGS} -o $(NAME) $(OBJ)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all