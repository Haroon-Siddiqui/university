#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>

using namespace std;

int add(int num1, int num2);
int selectionMenu();
string oddishOrEvenish(int num01);
string timeCalculator(int h, int m);
string alphaNumeric(int num);
int reverseNum(int numA);

int main()
{
    char repeatProgram = 'y';

    while (repeatProgram == 'y')
    {

        int userSelection = selectionMenu();

        if (userSelection == 1)
        {
            int num1, num2;
            cout << "Enter 1st Numbers: ";
            cin >> num1;
            cout << "Enter 2nd Number: ";
            cin >> num2;

            cout << "The sum is " << add(num1, num2) << "\n";
        }
        else if (userSelection == 2)
        {
            while (1)
            {
                cout << "The sleep time is 200 ms \n";
                Sleep(200);
            }
        }
        else if (userSelection == 3)
        {
            int n1, n2;
            cout << "Enter 1st Number: ";
            cin >> n1;
            cout << "Enter 2nd Number: ";
            cin >> n2;

            cout << "Greater Number is: " << max(n1, n2) << "\n";
        }
        else if (userSelection == 4)
        {
            int n1, n2;
            cout << "Enter 1st Number: ";
            cin >> n1;
            cout << "Enter 2nd Number: ";
            cin >> n2;

            cout << "Smaller Number is: " << min(n1, n2) << "\n";
        }
        else if (userSelection == 5)
        {
            float number1;
            int number2;

            cout << "Enter the Base number: ";
            cin >> number1;

            cout << "Enter the exponent: ";
            cin >> number2;

            cout << number1 << " raised to the power " << number2 << " is " << pow(number1, number2) << "\n";
        }
        else if (userSelection == 6)
        {
            float num;
            cout << "Enter a Number to calculate SQRT: ";
            cin >> num;

            if (num >= 0)
            {
                cout << "The SQRT of " << num << " is: " << sqrt(num) << "\n";
            }
            else
            {
                cout << "\nPlease Enter a positive number :>\n";
            }
        }
        else if (userSelection == 7)
        {
            float distance, angle, height, radians;

            cout << "Enter the distance from base of the tree (in feet): ";
            cin >> distance;

            cout << "Enter the angle of elevation (in Degrees): ";
            cin >> angle;
            radians = angle / (57.2958);

            height = distance * tan(radians);
            cout << "The Height of the tree is " << height;
        }
        else if (userSelection == 8)
        {
            float a, b, c, det, root1, root2;

            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
            cout << "Enter the value of c: ";
            cin >> c;

            det = (pow(b, 2)) - (4 * a * c);

            if (det == 0)
            {
                root1 = (-b) / (2 * a);

                cout << "x = " << root1 << "\n";
                cout << "x = " << root1 << "\n";
            }
            else if (det > 0)
            {
                root1 = (-1 * b + sqrt(det)) / (2 * a);
                root2 = (-1 * b - sqrt(det)) / (2 * a);

                cout << "x = " << root1 << "\n";
                cout << "x = " << root2 << "\n";
            }
            else
            {
                float part1, part2;
                part1 = -b / (2 * a);
                part2 = sqrt(-det) / (2 * a); // Fixed: Added () around 2*a so it divides correctly

                cout << " x = " << part1 << " + " << part2 << "i \n";
                cout << " x = " << part1 << " - " << part2 << "i\n";
            }
        }
        else if (userSelection == 9)
        {
            // For Option 9, we ask the user for input and multiply it by 5
            int number;
            cout << "Enter a number to multiply by 5: ";
            cin >> number;
            cout << "Result: " << number * 5 << "\n";
        }
        else if (userSelection == 10)
        {
            char inpt;
            cout << "Enter a character (A/a): ";
            cin >> inpt;

            if (inpt == 'A')
            {
                cout << "You have entered Capital A \n";
            }
            else if (inpt == 'a')
            {
                cout << "You have entered small a \n";
            }
            else
            {
                cout << "\nInvalid Input, Enter A or a\n";
            }
        }
        else if (userSelection == 11)
        {
            int numb, firstno, lastno;
            cout << "Enter a 3-digit number: ";
            cin >> numb;

            firstno = numb / 100;
            lastno = numb % 10;
            if (firstno == lastno)
            {
                cout << "The Number is Symmetrical\n";
            }
            else
            {
                cout << "The Number is not Symmetrical\n";
            }
        }
        else if (userSelection == 12)
        {
            int num01;
            cout << "Enter a 5 digit number: ";
            cin >> num01;
            if (num01 < 10000 || num01 > 99999)
            {
                cout << "\nInvalid Input ,Given number is not 5 digit long\n";
            }
            else
            {
                cout << "The given number is " << oddishOrEvenish(num01);
            }
        }
        else if (userSelection == 13)
        {
            int hour, min;
            cout << "Enter Hours (0-23): ";
            cin >> hour;
            cout << "Enter Minutes (0-59): ";
            cin >> min;

            cout << "The Time you will travel to is: " << timeCalculator(hour, min);
        }
        else if (userSelection == 14)
        {
            int inptNum;
            cout << "Enter a Number from 1-99: ";
            cin >> inptNum;

            if (inptNum < 1 || inptNum >= 100)
            {
                cout << "Enter a valid number from 1 to 99";
            }
            else
            {
                cout << alphaNumeric(inptNum);
            }
        }
        // else if (userSelection == 15)
        // {
        //     int volume, p1, p2;
        //     float hoursAway;

        //     cout << "Enter Volume of the pool (in litres): ";
        //     cin >> volume;

        //     cout << "Enter flow rate of frist pipe (per hour): ";
        //     cin >> p1;

        //     cout << "Enter flow rate of second pipe (per hour): ";
        //     cin >> p2;

        //     cout << "Enter no. of Hours that the workers are absent: ";
        //     cin >> hoursAway;
        // }
        else if (userSelection == 16)
        {
            int numA = 0;

            cout << "Enter a Number: ";
            cin >> numA;

            cout << "The reverse of the number is: " << reverseNum(numA);
        }
        else if (userSelection == 17)
        {
            int inptNum, reverse;
            cout << "Enter a Number: ";
            cin >> inptNum;

            // Using Function Defined already for 'Reverse' and 'numeric into alphabets program'

            reverse = reverseNum(inptNum);

            cout<<"The Reverse of "<<inptNum <<" is " <<reverse <<" which in English is "<<alphaNumeric(reverse);

        }
        else
        {
            cout << "This option is not implemented yet.\n";
        }
        cout << "\n\n";
        cout << "Do You Want to repeat the program (y/n): ";
        cin >> repeatProgram;
    }

    return 0;
} // for main

int selectionMenu()
{
    int localSelection;
    cout << "\n\n";
    cout << "Enter 1  for Sum \n";
    cout << "Enter 2  for Sleep function\n";
    cout << "Enter 3  for max number \n";
    cout << "Enter 4  for min number \n";
    cout << "Enter 5  for power calculator \n";
    cout << "Enter 6  for square root calculator \n";
    cout << "Enter 7  for Tree Height Finder\n";
    cout << "Enter 8  for roots of quadratic equation \n";
    cout << "Enter 9  for *5 function \n";
    cout << "Enter 10 for checking alphabet case \n";
    cout << "Enter 11 for symmetric number checker \n";
    cout << "Enter 12 for oddish evenish calculator \n";
    cout << "Enter 13 for Time Travel Calculator\n";
    cout << "Enter 14 for converting numeric numbers into alphabetic numbers\n";
    cout << "Enter 15 for pool's water calculator \n";
    cout << "Enter 16 for reverse number \n";
    cout << "Enter 17 for both reverse and alphabet conversion \n";

    cout << "\n\tEnter Here: ";
    cin >> localSelection;

    return localSelection;
}

int add(int num1, int num2)
{
    return num1 + num2;
}
string oddishOrEvenish(int num01)
{
    int sum = 0;
    while (num01 > 0)
    {
        sum = sum + num01 % 10;
        num01 = num01 / 10;
    }

    if (sum % 2 == 0)
    {
        return "Evenish";
    }
    else
    {
        return "Oddish";
    }
}
string timeCalculator(int h, int m)
{
    m = m + 15;
    if (m >= 60)
    {
        m = m - 60;

        h = h + 1;
        if (h >= 24)
        {
            h = h - 24;
        }
    }
    string hStr = to_string(h);
    string mStr = to_string(m);

    return hStr + ":" + mStr;
}
string alphaNumeric(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 10)
    {
        return ones[num];
    }
    else if (num >= 10 && num < 20)
    {
        // did num - 10 as the array starts at 0 (gives logical error if its not included)
        return teens[num - 10];
    }
    else
    {
        int tensDigit = num / 10;
        int onesDigit = num % 10;

        return tens[tensDigit] + ones[onesDigit];
    }
}
int reverseNum(int numA)
{
    int reverse = 0;
    while (numA > 0)
    {
        reverse *= 10;
        reverse = reverse + (numA % 10);
        numA = numA / 10;
    }
    return reverse;
}