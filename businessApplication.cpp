#include <iostream>
#include <windows.h>

using namespace std;

// Global Variables
int convertedLeeds, unConvertedLeeds;
float conversionRate;
int noOfLeeds;
// Global Arrays
string name[100], contactNo[100], product[100];
int leedStatus[100];

void mainMenu();
void clearBuffer();

int main()
{

    int choice = 10; // initialized choice so that loop may run for the first time.

    do
    {
        mainMenu();
        cin >> choice;
        if (cin.fail())
        {
            clearBuffer();
            cout << "\n\nInvalid Data Type\n\n";
        }
        else if (choice == 1)
        {
            int counter = 0;
            cout << "Enter Number of leeds you want to enter(1-99): ";
            cin >> noOfLeeds;
            if (noOfLeeds < 1 || noOfLeeds >= 100)
            {
                cout << "\n\nInvalid Input!\n";
                cout << "Enter between 1-99\n\n";
            }
            else
            {
                clearBuffer();

                while (counter < noOfLeeds)
                {
                    cout << "Enter Name Of leed " << (counter + 1) << ": ";
                    getline(cin, name[counter]);

                    do
                    {
                        cout << "Leed Status: \n";

                        cout << "\t1.Converted(Customer bought it)\n";

                        cout << "\t2.Not Converted(Yet to buy)\n";

                        cout << "\tEnter Here: ";
                        cin >> leedStatus[counter];

                        if (leedStatus[counter] != 1 && leedStatus[counter] != 2)
                        {
                            cout << "\nInvalid choice!.\n";
                        }
                    } while (leedStatus[counter] != 1 && leedStatus[counter] != 2);

                    cout << "Enter Contact number(03xx-xxxxxxx/Nill): ";
                    cin >> contactNo[counter];

                    clearBuffer();

                    cout << "Interested Product: ";
                    getline(cin, product[counter]);

                    // counter increment to make it repeatedly ask for leed's data
                    counter++;
                }
                cout << "\nData added Sucessfully!\n\n";
            }
        }
        else if (choice == 2)
        {

            int counter = 0;

            if (convertedLeeds <= noOfLeeds && convertedLeeds >= 0)
            {
                convertedLeeds = 0;
                while (counter < noOfLeeds)
                {
                    if (leedStatus[counter] == 1)
                    {
                        convertedLeeds++;
                    }
                    counter++;
                }

                unConvertedLeeds = noOfLeeds - convertedLeeds;

                conversionRate = ((float)convertedLeeds / noOfLeeds) * 100; // Type Casted convertedLeeds into Float for proper division.

                cout << "\n\nCalculations Completed!\n\n";
            }
            else
            {
                cout << "\n\nEnter Valid Data First!\n\n";
            }
        }
        else if (choice == 3)
        {
            cout << "\n\n\n+=============================+\n";
            cout << "|         CRM RESULTS         |\n";
            cout << "+=============================+\n";

            cout << "Total leeds: " << noOfLeeds << "\n";

            cout << "Converted Leeds: " << convertedLeeds << "\n";
            ;

            cout << "UnConverted leeds: " << unConvertedLeeds << "\n";

            cout << "Conversion Rate: " << conversionRate << "%\n\n\n";
        }
        else if (choice == 4)
        {
            cout << "Program closed successfully.\n";
            return 0;
        }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
void mainMenu()
{

    cout << " +=============================+ \n";
    cout << " |            CRM              | \n";
    cout << " |  Customer Management System | \n";
    cout << " +=============================+ \n";
    cout << " |                             | \n";
    cout << " |     Business Dashboard      | \n";
    cout << " |                             | \n";
    cout << " | [1]-Initailze / Add Data    | \n";
    cout << " | [2]-Perform Calculations    | \n";
    cout << " | [3]-Display Results         | \n";
    cout << " | [4]-Exit                    | \n";
    cout << " |_____________________________| \n";
    cout << "\n Enter Your Choice: ";
}
void clearBuffer()
{
    cin.clear();
    cin.ignore(1000, '\n');
}

// Notes:
//
//       next step is to add an option to that can list all records at the same time
//
//         check subtle issues