#include <iostream>
#include <windows.h>

using namespace std;

int choice;
int totalLeads, contactedLeads, successfulSales;
int pendingLeads;
float conversionRate;

void mainMenu();

int main()
{
    do
    {
        mainMenu();
        cin >> choice;

        

        if (choice == 1)
        {
            cout << "Enter total leads: ";
            cin >> totalLeads;

            cout << "Enter contacted leads: ";
            cin >> contactedLeads;

            cout << "Enter successful sales: ";
            cin >> successfulSales;

            cout << "Data added successfully!\n";
        }
        else if (choice == 2)
        {
            if (totalLeads > 0 &&
                contactedLeads <= totalLeads &&
                successfulSales <= contactedLeads)
            {
                pendingLeads = totalLeads - contactedLeads;
                conversionRate = (float)successfulSales / totalLeads * 100;

                cout << "Calculations completed!\n";
            }
            else
            {
                cout << "Enter valid data first!\n";
            }
        }
        else if (choice == 3)
        {
            cout << "\n+=============================+\n";
            cout << "|         CRM RESULTS         |\n";
            cout << "+=============================+\n";

            cout << "Total Leads: " << totalLeads << endl;
            cout << "Contacted Leads: " << contactedLeads << endl;
            cout << "Successful Sales: " << successfulSales << endl;
            cout << "Pending Leads: " << pendingLeads << endl;
            cout << "Conversion Rate: " << conversionRate << "%\n";
        }
        else if (choice == 0)
        {
            cout << "Program closed successfully.\n";
        }
        // else if (cin.fail())
        // {
        //     cin.clear()
        //     cin.ignore(1000,'\n')
        // }
        else
        {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

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






// #include <iostream>
// using namespace std;

// int choice;
// int totalLeads, contactedLeads, successfulSales;
// int pendingLeads;
// float conversionRate;

// void mainMenu()
// {
//     cout << "\n+=============================+\n";
//     cout << "|             CRM             |\n";
//     cout << "|  Customer Management System |\n";
//     cout << "+=============================+\n";
//     cout << "| 1. Initialize / Add Data    |\n";
//     cout << "| 2. Perform Calculations     |\n";
//     cout << "| 3. Display Results          |\n";
//     cout << "| 0. Exit                     |\n";
//     cout << "+=============================+\n";
//     cout << "Enter your choice: ";
// }





// int main()
// {
//     do
//     {
//         mainMenu();
//         cin >> choice;

//         if (choice == 1)
//         {
//             cout << "Enter total leads: ";
//             cin >> totalLeads;

//             cout << "Enter contacted leads: ";
//             cin >> contactedLeads;

//             cout << "Enter successful sales: ";
//             cin >> successfulSales;

//             cout << "Data added successfully!\n";
//         }
//         else if (choice == 2)
//         {
//             if (totalLeads > 0 &&
//                 contactedLeads <= totalLeads &&
//                 successfulSales <= contactedLeads)
//             {
//                 pendingLeads = totalLeads - contactedLeads;
//                 conversionRate = (float)successfulSales / totalLeads * 100;

//                 cout << "Calculations completed!\n";
//             }
//             else
//             {
//                 cout << "Enter valid data first!\n";
//             }
//         }
//         else if (choice == 3)
//         {
//             cout << "\n+=============================+\n";
//             cout << "|         CRM RESULTS         |\n";
//             cout << "+=============================+\n";

//             cout << "Total Leads: " << totalLeads << endl;
//             cout << "Contacted Leads: " << contactedLeads << endl;
//             cout << "Successful Sales: " << successfulSales << endl;
//             cout << "Pending Leads: " << pendingLeads << endl;
//             cout << "Conversion Rate: " << conversionRate << "%\n";
//         }
//         else if (choice == 0)
//         {
//             cout << "Program closed successfully.\n";
//         }
//         else
//         {
//             cout << "Invalid choice!\n";
//         }

//     } while (choice != 0);

//     return 0;
// }
