#include <iostream>
#include "Aeroflot.h"
#include "functions.h"

using namespace std;

int main()
{
    int command;
    int cnt = 0;
    Aeroflot* flights = new Aeroflot[cnt];
    while (true)
    {
        Menu();
        cin >> command;
        try {
            switch (command) {
                case 1: {
                    addFlight(flights, cnt);
                    break;
                }
                case 2: {
                    addFlightByIndex(flights, cnt); // commit
                    break;
                }
                case 3: {
                    removeFlight(flights, cnt);
                    break;
                }
                case 4: {
                    printFlights(flights, cnt);
                    break;
                }
                case 5: {
                    editFlights(flights, cnt);
                    break;
                }
                case 6: {
                    break;
                }
                case 7: {
                    break;
                }
                case 8: {
                    cout << "Goodbye!\n";
                    return 0;
                }
                default: {
                    cout << "Command is not found!\n";
                }
            }
        }
        catch (Exception error)
        {
            cout << error;
        }
    }
}
