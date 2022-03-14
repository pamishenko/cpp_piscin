NAME = zombie 

HEADER_FOLDER	=	./includes/
HEADER_FILES	=	\
					${HEADER_FOLDER}Zombie.hpp

SRC_DIR = src/
SRC		=	\
			main.cpp \
			Zombie.cpp \
			zombieHorde.cpp

CC				=	c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRC:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRC_DIR)%.cpp
	mkdir -p $(OBJS_DIR)
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER_FILES) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY 		: 	all clean fclean re
