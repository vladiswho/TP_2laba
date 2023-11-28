#include <iostream>
#include "Aeroflot.h"
#include "functions.h"
#include "Strings.h"

using namespace std;

int main()
{
    int command;
    int cnt = 0;
    Aeroflot* flights = new Aeroflot[cnt];
    cout << "1. Task 1\n"
            "2. Task 2\n"
            "Enter a command:\n";
    cin >> command;
    switch (command) {
        case 1: {
            while (true) {
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
                            sortFlights(flights, cnt);
                            break;
                        }
                        case 7: {
                            checkFlight(flights, cnt);
                            break;
                        }
                        case 8: {
                            cout << "Goodbye!\n";
                            delete[] flights;
                            return 0;
                        }
                        default: {
                            cout << "Command is not found!\n";
                        }
                    }
                }
                catch (Exception error) {
                    cout << error;
                }
            }
        }
        case 2:{
            while (true)
            {
                try
                {
                    cout << "Enter file name:\n";
                    std::string file;
                    cin >> file;
                    Strings object;
                    object.checkFile(file);
                    return 0;
                }
                catch (Exception error) {
                    cout << error;}
            }
        }
    }
}
