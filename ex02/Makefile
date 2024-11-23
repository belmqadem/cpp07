GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

NAME = array
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SRCS = main.cpp Array.cpp
OBJS = $(SRCS:.cpp=.o)

%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled.$(RESET)"

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re : fclean all

.PHONY : all clean fclean re
