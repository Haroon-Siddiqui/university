#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main()
//=========================================================
// int add(int num1,int num2);
// int main()
// {
//     int num1,num2;
//     cout <<"Enter 1st Numbers: ";
//     cin>> num1;
//     cout <<"Enter 2nd Number: ";
//     cin >> num2;

//    cout <<"The sum is " << add(num1, num2);

//    return 0;
// }
// int add(int num1,int num2)
// {
//     return num1 + num2;

// }

//=======================================================
// {
//     while(1)
//     {
//         cout <<"Hello";
//         Sleep(200);
//     }
// }
// =======================================================

// {
//     int n1,n2;
//     cout <<"Enter 1st Number: ";
//     cin >> n1;
//     cout <<"Enter 2nd Number: ";
//     cin >> n2;

//     cout <<"Greater Number is: "<< max(n1,n2);

//     return 0;
// }
//=======================================================
// {
//     int n1,n2;
//     cout <<"Enter 1st Number: ";
//     cin >> n1;
//     cout <<"Enter 2nd Number: ";
//     cin >> n2;

//     cout <<"Smaller Number is: "<< min(n1,n2);

//     return 0;
// }
//============================================================

// {
//     float number1;
//     int number2;

//     cout <<"Enter the Base numnber: ";

//     cin >> number1;

//     cout <<"Enter the exponent: ";

//     cin >> number2;

//     cout <<number1 <<" raised to the power " <<number2 <<" is " << pow(number1,number2);
//     return 0;
// }
//=====================================================

// {
//     float num;
//     cout <<"Enter a Number: ";
//     cin >> num;

//     if(num >= 0)
//     {
//         cout <<"The SQRT of "<<num <<" is: " <<sqrt(num);
//     }
//     else
//     {
//         cout <<"\nPlease Enter a positive number :>\n";
//     }
// }
//============================================================
//    UNcomplete!
// {
//     float
//     cout <<"Enter the Distance from the base of the tree (in ft) : ";
//     cin >>;
//     cout <<"Enter the angle of elevation (in degrees) : ";
//     cin >>;
//     cout <<"The Height of the tree is: "<< <<" feet";

// }
//========================================================================
// {
//     float a, b, c, det, root, root1, root2;

//     cout <<"Enter the vaue of a: ";
//     cin >> a;
//     cout <<"Enter the vaue of b: ";
//     cin >> b;
//     cout <<"Enter the vaue of c: ";
//     cin >> c;

//     det = (pow(b , 2)) - (4*a*c);

//     if (det == 0)
//     {
//         root1 = (-b )/(2*a);

//         cout <<"x = " <<root1 <<"\n";
//         cout <<"x = " <<root1 <<"\n";
//     }
//     else if (det > 0)
//     {
//         root1 = (-1*b + sqrt(det))/(2*a);
//         root2 = (-1*b - sqrt(det))/(2*a);

//         cout <<"x = " <<root1 <<"\n";
//         cout <<"x = " <<root2 <<"\n";

//     }
//     else
//     {
//         float part1, part2;
//         part1 = -b/2*a;
//         part2 = sqrt(-det)/2*a;

//         cout<<"x = "part1 <<" + " <<part2 <<"i";
//         cout<<"x = "part1 <<" - " <<part2 <<"i";

//     }
// }
//===================================================================
// {
//     char inpt;
//     cout <<"Enter a character (A/a): ";
//     cin >> inpt;

//     if (inpt == 'A')
//     {
//         cout<<"You have entered Capital A ";
//     }
//     else if (inpt == 'a')
//     {
//         cout<<"You have entered small a ";
//     }
//     else
//     {
//         cout << "\nInvalid Input ,Enter A or a\n";
//     }
//     return 0;

// }
//=====================================================================
// {
//     int numb, firstno, lastno;
//     cout << "Enter a 3-digit number: ";
//     cin >> numb;

//     firstno = numb / 100;
//     lastno = numb % 10;
//     if (firstno == lastno)
//     {
//         cout << "The Number is Symmetrical";
//     }
//     else
//     {
//         cout << "The Number is not Symmetrical";
//     }
// }
//==============================================================
{
    int numb1,addition;
    
    cout <<"Enter a 5-digit number: ";
    cin >> numb1;

    for (int i =1;i<=5;i++)
    {
    addition = numb1 % 10;
    numb1 = numb1 * 10;
    }
cout <<numb1;
    
}