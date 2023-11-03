NAME = Violence_inutile

CC = g++

CFLAG =  -std=c++98 -Wall -Werror -Wextra -g

SRCS =	HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\
		main.cpp\

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
