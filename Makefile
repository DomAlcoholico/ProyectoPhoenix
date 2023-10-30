
bin/player : src/player.cpp 
	c++ src/player.cpp -o bin/player -I include -lcurses

run : bin/player
	./bin/player