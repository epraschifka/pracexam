#include "Helicopter.h"
int Helicopter::heliID = 0;

Helicopter::Helicopter() {
    craftID = heliID++;
    numberOfFlights = 0;
}
Helicopter::Helicopter(int w, string n) {
    craftID = heliID++;
    numberOfFlights = 0;
}

string Helicopter::get_name() {return name;}
void Helicopter::set_name(string _name) {name = _name;}
int Helicopter::get_craftID() {return craftID;}
void Helicopter::set_craftID(int _craftID) {craftID = _craftID;}
void Helicopter::fly(int headwind, int minutes) {
    int extra_fuel = 0;
    if (get_weight() > 5670) {
        extra_fuel = get_weight() - 5670;
        }

    if (headwind < 40) {
        if (get_fuel() - 0.2 * minutes - extra_fuel*0.01 >= 20) 
            {
            set_fuel(get_fuel() - 0.2 * minutes - extra_fuel*0.01);
            set_numberOfFlights(get_numberOfFlights()+1);
            }
    }

    if (headwind >= 40) {
        if (get_fuel() - 0.4 * minutes - extra_fuel*0.01 >= 20) 
        {
         set_fuel(get_fuel() - 0.4 * minutes - extra_fuel*0.01);
         set_numberOfFlights(get_numberOfFlights()+1);
        }
    }
}