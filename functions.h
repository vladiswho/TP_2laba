#ifndef TP_2LABA_FUNCTIONS_H
#define TP_2LABA_FUNCTIONS_H
#include "Aeroflot.h"
#include "Exception.h"

void Menu()
{
    std::cout << "\nMenu:\n"
            "1. Add flight\n"
            "2. Add flight by index\n"
            "3. Remove flight\n"
            "4. Print flights\n"
            "5. Sort flights\n"
            "6. Check flights\n"
            "7. Exit\n";
}

void addFlight(Aeroflot* &flights, int &count, Aeroflot &new_flight)
{
    Aeroflot* temp = new Aeroflot[count + 1];
    for(int i=0; i < count - 1; i++)
    {
        temp[i] = flights[i];
    }
    delete [] flights;
    temp[count - 1] = new_flight;
    flights = temp;
}

#endif //TP_2LABA_FUNCTIONS_H
