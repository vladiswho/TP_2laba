#include <iostream>
#include "Aeroflot.h"
#include "functions.h"

using namespace std;

int main()
{
    int command;
    Aeroflot* flights = new Aeroflot[0];
    int cnt = 0;
    while (true)
    {
        Menu();
        cin >> command;
        try {
            switch (command) {
                case 1: {
                    Aeroflot flight;
                    cin >> flight;
                    cnt++;
                    addFlight(flights, cnt, flight);
                    break;
                }
                case 2: {
                    int index;
                    if (!cnt)
                        throw Exception("There is no place for the object!\n");
                    cout << "Enter index from 0 to" << cnt - 1 << endl;
                    cin >> index;
                    if (index >= cnt)
                        throw Exception("It is impossible to insert into this position!\n");
                    Aeroflot flight;
                    cin >> flight;
                    flights[index] = flight;
                    break;
                }
                case 3: {

                    break;
                }
                case 4: {
                    for (int i = 0; i < cnt; i++) {
                        cout << flights[i];
                    }
                    break;
                }
                case 5: {
                    break;
                }
                case 6: {
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
