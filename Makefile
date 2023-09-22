runFallDown : bin/FallDown
     ./bin/falldown

runMascota : bin/mascota
	    ./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota.hpp include/Entrenador.hpp
echo "Compilando Mascota"
rm bin/mascota
g++ src/mascota.cpp -o bin/FallDown -I include

bin/FallDown : src/FallDown.cpp
g++ src/FallDown.cpp -o bin/FallDown -I include