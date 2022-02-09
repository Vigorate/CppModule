CC = g++
ODIR = obj
PROG = ex03
CXXFLAGS = -Wall -Wextra -std=c++98

OBJS = $(ODIR)/HumanA.o $(ODIR)/HumanB.o $(ODIR)/Weapon.o $(ODIR)/main.o 
$(PROG) : $(ODIR) $(OBJS)
	$(CC) -o $@ $(OBJS) $(CXXFLAGS)

$(ODIR)/HumanA.o : ./HumanA.cpp ./HumanA.hpp ./Weapon.hpp 
	$(CC) -c ./HumanA.cpp -o $@ $(CXXFLAGS)

$(ODIR)/HumanB.o : ./HumanB.cpp ./HumanB.hpp ./Weapon.hpp 
	$(CC) -c ./HumanB.cpp -o $@ $(CXXFLAGS)

$(ODIR)/Weapon.o : ./Weapon.cpp ./Weapon.hpp 
	$(CC) -c ./Weapon.cpp -o $@ $(CXXFLAGS)

$(ODIR)/main.o : ./main.cpp ./HumanA.hpp ./Weapon.hpp ./HumanB.hpp ./Weapon.hpp ./Weapon.hpp 
	$(CC) -c ./main.cpp -o $@ $(CXXFLAGS)

$(ODIR) :
	if [ ! -d $(ODIR) ]; then mkdir $(ODIR); fi

.PHONY : clean
clean :
	if [ -d $(ODIR) ]; then rm $(ODIR) -r; fi
	if [ -f $(PROG) ]; then rm $(PROG); fi

