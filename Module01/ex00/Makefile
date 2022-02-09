CC = g++
ODIR = obj
PROG = zombie
CXXFLAGS = -Wall -Wextra -std=c++98

OBJS = $(ODIR)/Zombie.o $(ODIR)/main.o $(ODIR)/newZombie.o $(ODIR)/randomChump.o 
$(PROG) : $(ODIR) $(OBJS)
	$(CC) -o $@ $(OBJS) $(CXXFLAGS)

$(ODIR)/Zombie.o : ./Zombie.cpp ./Zombie.hpp 
	$(CC) -c ./Zombie.cpp -o $@ $(CXXFLAGS)

$(ODIR)/main.o : ./main.cpp ./Zombie.hpp 
	$(CC) -c ./main.cpp -o $@ $(CXXFLAGS)

$(ODIR)/newZombie.o : ./newZombie.cpp ./Zombie.hpp 
	$(CC) -c ./newZombie.cpp -o $@ $(CXXFLAGS)

$(ODIR)/randomChump.o : ./randomChump.cpp ./Zombie.hpp 
	$(CC) -c ./randomChump.cpp -o $@ $(CXXFLAGS)

$(ODIR) :
	if [ ! -d $(ODIR) ]; then mkdir $(ODIR); fi

.PHONY : clean
clean :
	if [ -d $(ODIR) ]; then rm $(ODIR) -r; fi
	if [ -f $(PROG) ]; then rm $(PROG); fi

