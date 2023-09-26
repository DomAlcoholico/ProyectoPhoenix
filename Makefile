CXX = x86_64-w64-mingw32-g++
CXXFLAGS = -g 
runFallDown : bin/FallDown
	 ./bin/falldown

runMascota : bin/mascota
	./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota.hpp 
	$(CXX) src/mascota.cpp -o bin/FallDown -I include

bin/FallDown : src/FallDown.cpp
	g++ src/FallDown.cpp -o bin/FallDown -I include