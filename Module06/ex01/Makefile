NAME = poly

SRCS	= Animal.cpp  Cat.cpp  Dog.cpp  main.cpp  WrongAnimal.cpp  WrongCat.cpp
HEADERS	= Animal.hpp  Cat.hpp  Dog.hpp  WrongAnimal.hpp  WrongCat.hpp

CC			= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98
LD			= $(CC)

OBJS		= $(SRCS:%.cpp=%.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


%.o: %.cpp $(HEADERS)
	$(CC) -c $(CPP_FLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@clear && ./${NAME}
.PHONY: all clean fclean re
