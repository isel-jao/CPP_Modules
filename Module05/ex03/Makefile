NAME = Bureaucrat

SRCS	= Bureaucrat.cpp Form.cpp main.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp
HEADERS	= Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp

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
	$(RM) $(NAME) *_shrubbery

re: fclean all

test: all
	@clear && \
	echo compailed with success =================== && \
	./${NAME}
.PHONY: all clean fclean re
