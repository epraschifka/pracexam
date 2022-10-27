#include "Airplane.h"
Airplane::Airplane(){};
Airplane::Airplane(int w, int p) {
    set_weight(w);
    numPassengers = p; 
}

void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {numPassengers = 0;}
}

void Airplane::fly(int headwind, int minutes) {
    int extra_fuel = numPassengers * 0.001;

    if (headwind < 60) {
        if (get_fuel() - 0.3 * minutes - extra_fuel*0.01 >= 20) 
            {
            set_fuel(get_fuel() - 0.2 * minutes - extra_fuel*0.01);
            set_numberOfFlights(get_numberOfFlights()+1);
            }
    }

    if (headwind >= 60) {
        if (get_fuel() - 0.5 * minutes - extra_fuel*0.01 >= 20) 
        {
         set_fuel(get_fuel() - 0.4 * minutes - extra_fuel*0.01);
         set_numberOfFlights(get_numberOfFlights()+1);
        }
    }
}