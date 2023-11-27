#ifndef TP_2LABA_AEROFLOT_H
#define TP_2LABA_AEROFLOT_H
#include <iostream>

class Aeroflot
{
private:
    std::string destination;
    int flightNumber;
    std::string aircraftType;
public:
    Aeroflot();
    Aeroflot(std::string dest, int flightNum, std::string aircraft);
    Aeroflot(const Aeroflot& other);
    ~Aeroflot();
    std::string getDestination();
    void setDestination(std::string dest);
    int getFlightNumber();
    void setFlightNumber(int flightNum);
    std::string getAircraftType();
    void setAircraftType(std::string aircraft);
    friend std::ostream& operator<<(std::ostream& os, const Aeroflot& obj);
    friend std::istream& operator>>(std::istream& is, Aeroflot& obj);
};


#endif //TP_2LABA_AEROFLOT_H
