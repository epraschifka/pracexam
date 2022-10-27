#include "AirCraft.h"
AirCraft::AirCraft() {}
AirCraft::AirCraft(int w) {weight = w;}           // creates an Aircraft with weight w
void AirCraft::refuel() {fuel = 100;}             // Resets fuel back to 100%
void AirCraft::set_weight(int _weight) {weight = _weight;}
void AirCraft::set_fuel(float _fuel) {fuel = _fuel;}
void AirCraft::set_numberOfFlights(int _numberOfFlights) {numberOfFlights = _numberOfFlights;}
int AirCraft::get_weight() {return weight;}
float AirCraft::get_fuel() {return fuel;}
int AirCraft::get_numberOfFlights() {return numberOfFlights;}