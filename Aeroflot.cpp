#include <iostream>
#include <string>
#include "Aeroflot.h"

using namespace std;

Aeroflot::Aeroflot()
{
    cout << "Aeroflot default constructor called\n" << endl;
}

Aeroflot::Aeroflot(string dest, int flightNum, string aircraft)
{
    destination = dest;
    flightNumber = flightNum;
    aircraftType = aircraft;
    cout << "Aeroflot constructor with parameters called\n" << endl;
}

Aeroflot::Aeroflot(const Aeroflot& other)
{
    destination = other.destination;
    flightNumber = other.flightNumber;
    aircraftType = other.aircraftType;
    cout << "Aeroflot copy-constructor called\n" << endl;
}

Aeroflot::~Aeroflot()
{
    cout << "Aeroflot default destructor called\n" << endl;
}

string Aeroflot::getDestination()
{
    return destination;
}

void Aeroflot::setDestination(string dest)
{
    destination = dest;
}

int Aeroflot::getFlightNumber()
{
    return flightNumber;
}

void Aeroflot::setFlightNumber(int flightNum)
{
    flightNumber = flightNum;
}

string Aeroflot::getAircraftType()
{
    return aircraftType;
}

void Aeroflot::setAircraftType(string aircraft)
{
    aircraftType = aircraft;
}

ostream& operator<<(ostream& os, const Aeroflot& obj)
{
os << "Destination: " << obj.destination << endl;
os << "Flight number: " << obj.flightNumber << endl;
os << "Aircraft type: " << obj.aircraftType << endl;
return os;
}

istream& operator>>(istream& is, Aeroflot& obj) {
    cout << "Enter destination: ";
    is >> obj.destination;
    cout << "Enter flight number: ";
    is >> obj.flightNumber;
    cout << "Enter aircraft type: ";
    is >> obj.aircraftType;

    return is;
}