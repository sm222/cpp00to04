NAME = a.out

CC = c++

CFLAG =  -std=c++98 -Wall -Werror -Wextra -g

SRCS =	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\

OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)
	

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@echo clean $(OBJS)

fclean: clean
	@rm -f $(NAME)
	@echo clean $(NAME)

re: fclean all

.PHONY: all 
