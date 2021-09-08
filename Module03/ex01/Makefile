NAME = ScavTrap

SRCS	= ClapTrap.cpp ScavTrap.cpp main.cpp 
HEADERS	= ClapTrap.hpp ScavTrap.hpp

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
	@./${NAME}
.PHONY: all clean fclean re
