NAME = Bureaucrat

SRCS	= main.cpp Bureaucrat.cpp Form.cpp
HEADERS	= Bureaucrat.hpp Form.hpp

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
	@clear && \
	echo compailed with success =================== && \
	./${NAME}
.PHONY: all clean fclean re
