class AirCraft {
    private: 
    int weight;                // the weight of AirCraft
    float fuel;                // fuel percentage, initially 100%
    public:
    int numberOfFlights;       // initially 0
    AirCraft();
    AirCraft(int w);           // creates an Aircraft with weight w
    void refuel();             // Resets fuel back to 100%
    void set_weight(int _weight);
    void set_fuel(float _fuel);
    void set_numberOfFlights(int _numberOfFlights);
    int get_weight();
    float get_fuel();
    int get_numberOfFlights();
    virtual void fly(int headwind, int minutes) = 0;     // headwind in km/h and minutes (time flying)
};