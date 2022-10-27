#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirCraft.h"
#include <string>
using namespace std;

class Helicopter : public AirCraft {
    public:
    Helicopter();
    Helicopter(int w, string n);     // creates a Helicopter with weight w and name n
    string get_name();
    void set_name(string _name);
    int get_craftID();
    void set_craftID(int _craftID);
    void fly(int headwind, int minutes);
    private:
    string name;                    // name of the Helicopter
    int craftID;
    static int heliID;
};

#endif 