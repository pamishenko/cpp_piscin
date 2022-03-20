NAME = animals

HEADER_FOLDER	=	./includes/
HEADER_FILES	=	\
					${HEADER_FOLDER}Animal.hpp \
					${HEADER_FOLDER}Cat.hpp \
					${HEADER_FOLDER}Dog.hpp


SRC_DIR = src/
SRC		=	\
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			main.cpp

CC				=	c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRC:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRC_DIR)%.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER_FILES) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

p: re
	./${NAME}

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY 		: 	all clean fclean re