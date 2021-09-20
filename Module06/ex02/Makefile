NAME = identify

SRCS	= identify.cpp main.cpp
HEADERS	= identify.hpp

CC			= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -I .
LD			= $(CC)

OBJS		= $(SRCS:%.cpp=%.o)

RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) ${CPP_FLAGS} $(OBJS) -o $(NAME)


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
