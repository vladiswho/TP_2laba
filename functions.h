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
            "5. Edit flight\n"
            "6. Sort flights\n"
            "7. Check flights\n"
            "8. Exit\n";
}

void addFlight(Aeroflot* &flights, int &cnt)
{
    Aeroflot flight;
    std::cin >> flight;
    cnt++;
    Aeroflot* temp = new Aeroflot[cnt];
    for(int i=0; i < cnt - 1; i++)
    {
        Aeroflot copy_flight(flights[i]);
        temp[i] = copy_flight;
    }
    delete [] flights;
    temp[cnt - 1] = flight;
    flights = temp;

}

void addFlightByIndex(Aeroflot* &flights, int &cnt)
{
    int index;
    if (!cnt)
        throw Exception("There is no place for the object!\n");
    std::cout << "Enter index from 0 to " << cnt - 1 << ":\n";
    std::cin >> index;
    if (0 > index >= cnt)
        throw Exception("It is impossible to insert into this position!\n");
    Aeroflot flight;
    std::cin >> flight;
    flights[index] = flight;
}

void removeFlight(Aeroflot* &flights, int &cnt)
{
    if (!cnt)
        throw Exception("There is no place for the object!\n");
    int index;
    std::cout << "Enter flight index to remove:\n";
    std::cin >> index;
    if (0 > index || index >= cnt)
        throw Exception ("There is no such flight!\n");
    Aeroflot* temp = new Aeroflot[cnt - 1];
    for (int i = 0; i < index; i++)
    {
        temp[i] = flights[i];
    }
    for (int i = index + 1; i < cnt; i++)
    {
        temp[i - 1] = flights[i];
    }
    delete [] flights;
    flights = temp;
    cnt--;
}

void printFlights(Aeroflot* &flights, int &cnt)
{
    if (!cnt)
        throw Exception("The list of flights is empty!\n");
    for (int i = 0; i < cnt; i++) {
        std::cout << flights[i];
    }
}

void editFlights(Aeroflot* &flights, int &cnt)
{
    if (!cnt)
        throw Exception("The list of flights is empty!\n");
    int index;
    std::cout << "Enter flight index to edit from 0 to " << cnt - 1 << ":\n";
    std::cin >> index;
    if (0 > index || index >= cnt)
        throw Exception("There is no such flight!\n");
    Aeroflot flight;
    std::cin >> flight;
    flights[index] = flight;
}

#endif //TP_2LABA_FUNCTIONS_H
