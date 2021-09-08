NAME =  DiamondTrap

SRCS	= ClapTrap.cpp ScavTrap.cpp main.cpp  FragTrap.cpp DiamondTrap.cpp 
HEADERS	= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

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
