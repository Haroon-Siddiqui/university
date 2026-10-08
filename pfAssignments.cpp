// Header files
#include <iostream>
#include <string>

using namespace std;


// Function Prototypes
void userInterface(int &userSelection);
void fuelCalculator();
void inchesToFeet();
void rubixCube();
void calculator();
void vote();
void passOrFail();
void evenOdd();
void discountCalc();
void fuelCalculator2();
void discountCalculator2();
void infiniteCalculator();
void infiniteNamePrint();
void infiniteDiscountCalculator();


// Main Function
int main()
{
// Variable Initializtions and declerations
    int userSelection;
    char repeatProgram='y';
// While loop to repeat the program
while(repeatProgram=='y')
{   
    // Spacing
    cout <<"\n\n";
    // Printing User Interface
    userInterface(userSelection);
    
    // Main Loop for Condition Checking
     if (userSelection == 1)
    {
        fuelCalculator();
    }
    else if (userSelection == 2)
    {
        inchesToFeet();
    } 
    else if (userSelection == 3)
    {
        rubixCube();
    }
    else if (userSelection == 4)
    {
        calculator();
    }
    else if (userSelection == 5)
    {
        vote();
    } 
    else if (userSelection == 6)
    {
        passOrFail();
    }
    else if (userSelection == 7)
    {
        evenOdd();
    }
    else if (userSelection == 8)
    {
        discountCalc();
    }
    else if (userSelection == 9)
    {
        fuelCalculator2();
    }
    else if (userSelection == 10)
    {
        discountCalculator2();
    }
    else if (userSelection == 11)
    {
        infiniteCalculator();
    }
    else if (userSelection == 12)
    {
        infiniteNamePrint();
    }
    else if (userSelection == 13)
    {
        infiniteDiscountCalculator();
    }
    // else if (userSelection == 14)
    // {
    //     return 0;
    // }
    else
    {
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cout << "\n\n Do You Want to repeat The Program (y/n) ";
    cin >> repeatProgram;
}
return 0;
}

// Functions Declerations
void userInterface(int &userSelection)
{
    bool condition=true;
   while (condition)
   {
    cout<<"Enter 1  for Fuel Calculator \n";
    cout<<"Enter 2  for Inches to Feet Converter\n";
    cout<<"Enter 3  for Rubix's Cube Stickers Calculator \n";
    cout<<"Enter 4  for Calculator \n";
    cout<<"Enter 5  for Voting Eligibility \n";
    cout<<"Enter 6  for Pass Or Fail \n";
    cout<<"Enter 7  for Even Odd  \n";
    cout<<"Enter 8  for Discount Calculator \n";
    cout<<"Enter 9  for fuel calculator 2.0 \n";
    cout<<"Enter 10 for Discount Calculator 2.0 \n";
    cout<<"Enter 11 for Infinite-Calcilator \n";
    cout<<"Enter 12 for infinite-Name Printing \n";
    cout<<"Enter 13 for infinite-Discount Calculator \n";
    // cout<<"Enter 14 for _________ \n";
    cout<<"Enter Here:  ";
    cin >> userSelection;
    if (cin.fail() || userSelection < 1 || userSelection > 13)
       {
         condition = true;
         cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else
        {
            condition = false;    
        }
   }
}
void fuelCalculator()
{
    float distance,fuel;
    
    cout <<"Enter Distance in km: ";
    cin >> distance;
    if (cin.fail() || distance < 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
    fuel = distance * 10;
    cout <<"The Fuel Needed is "<< fuel <<" litres";
    }
}
void inchesToFeet()
{
    float inch,feet;
    
    cout <<"Enter Measurement in Inches: ";
    
    cin >> inch;
    if (cin.fail() || inch < 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
    feet=inch/12.0;
    
    cout <<"Measurement in feets is "<< feet <<" ft";
    }
}
void rubixCube()
{
    int sides,stickers;
    
    cout <<"Enter the side length of Rubix's cube: ";
    
    cin >> sides;
    if (cin.fail() || sides <= 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
    stickers = 6* (sides*sides);
    
    cout << "Number of stickers Needed : "<< stickers;
    }
}
void calculator()
{
    float x , y;
    
    char op ;  
    
    cout << "Enter Two Numbers : ";
    
    cin >> x >> y ;
    if (cin.fail())
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
        cout << "Enter an operator (+, -, *, / ):";

        cin >> op;
    
     if (op == '+')
         {
             cout << "The sum of " << x << " and " << y <<" is " << x+y << "\n";
         }
     else if (op == '-')
         {
         cout << "The Difference of " <<x << " and " << y <<" is " << x-y << endl;
         }
     else if (op == '*')    
     {
         cout << " The product of " << x <<" and " << y <<" is " << x*y << endl ;
     }
     else if (op == '/')
     {
         if(y != 0)
             {
                 cout << "The quotient of " << x <<" and " << y << " is " << x/y << endl ;
             }
         else
             {
                 cout << " Division By zero is not allowed " << endl;
             }
      }
        else 
      {
            cout <<" Invalid Operator \n";
            cin.clear ();
            cin.ignore (1000,'\n');
        }
    }
}
void vote()
{
    int age;
    cout <<"Enter Your Age in Years: ";
    cin >> age;
    if (cin.fail() ||  age < 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
        if (age >= 18)
        {
            cout << "\nYou are eligible to vote.";
        }
        else
        {
            cout << "\nYou are not eligible to vote yet.";
        }
    }

}
void passOrFail()
{
    int score;
    cout<<"Enter Your Test score out of Hundred: ";
    cin >> score;
    if (cin.fail() ||  score < 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
    if(score > 50)
        {
            cout <<"Pass";
        } 
    else
        {
            cout<<"Fail";
        }
    }
}
void evenOdd()
{
    int num;
    cout <<"Enter a Number: ";
    cin >> num;
    if ( cin.fail() )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
        if (num % 2 == 0)
        {
        cout<<"Number "<< num <<" is even. ";
        }
        else
        {
        cout<<"Number "<< num <<" is odd. ";
        }
    }
}
void discountCalc()
{
    float purchase,payable;
    string day;
    cout <<"Enter the total Purchase Amount: $  ";
    cin >> purchase;
    cout <<"Enter the day of Purchase: ";
    cin >> day;
    if (day == "Sunday" || day == "sunday" || day == "SUNDAY")
    {
        payable = purchase - (purchase * 10) / 100;
        cout <<"Payable Amount: "<< payable;
    }
    else 
    {
        cout <<"Payable Amount: "<< purchase;
    }
}
void fuelCalculator2()
{
    float distances,fuels;

    cout <<"Enter Distance in km: ";
    cin >> distances;
    if (cin.fail() ||  distances < 0 )
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
        fuels = distances * 10;
        if (fuels >= 100)
        {
            cout <<"The Fuel Needed is "<< fuels <<" litres";
        }
        else
        {
            cout <<"The Fuel Needed is 100 litres";
        }
    }
}
void discountCalculator2()
{
    float purchased,payable2;
    string day2;
    cout <<"Enter the total Purchase Amount: $  ";
    cin >> purchased;
    cout <<"Enter the day of Purchase: ";
    cin >> day2;
    if (day2 == "Sunday" || day2 == "sunday" || day2 == "SUNDAY")
    {
        payable2 = purchased - (purchased * 10) / 100;
        cout <<"Payable Amount: "<< payable2;
    }
    else 
    {
        payable2 = purchased - (purchased * 5) / 100;
        cout <<"Payable Amount: "<< payable2;
    }
}
void infiniteCalculator()
{
    float x , y;
    
    char op ;  
        cout <<"=================================\n";
        cout <<"WARNING! This Program is infinite\n";
        cout <<"Press Ctrl + c to froce close\n";
        cout <<"=================================\n\n";
while(1)
    {
  
    cout << "Enter Two Numbers : ";
    
    cin >> x >> y ;
    if (cin.fail())
       {
        cout <<"\n\n Invalid Input! \n\n";
         cin.clear();
         cin.ignore(1000,'\n');
       }
    else 
    {    
        cout << "Enter an operator (+, -, *, / ):";

        cin >> op;
    
     if (op == '+')
         {
             cout << "The sum of " << x << " and " << y <<" is " << x+y << "\n";
         }
     else if (op == '-')
         {
         cout << "The Difference of " <<x << " and " << y <<" is " << x-y << endl;
         }
     else if (op == '*')    
     {
         cout << " The product of " << x <<" and " << y <<" is " << x*y << endl ;
     }
     else if (op == '/')
     {
         if(y != 0)
             {
                 cout << "The quotient of " << x <<" and " << y << " is " << x/y << endl ;
             }
         else
             {
                 cout << " Division By zero is not allowed " << endl;
             }
      }
        else 
      {
            cout <<" Invalid Operator \n";
            cin.clear ();
            cin.ignore (1000,'\n');
        }
    }
    }
}
void infiniteNamePrint()
{
    string nameOfUser;

        cout <<"=================================\n";
        cout <<"WARNING! This Program is infinite\n";
        cout <<"Press Ctrl + c to froce close\n";
        cout <<"=================================\n\n";

        // to clear the buffer which is needed when using getline command
            cin.ignore(1000, '\n');  


        cout <<"Enter Your Name: ";
        getline (cin, nameOfUser);


    while(1)
    {
        cout << nameOfUser <<"\n";

    }




}
void infiniteDiscountCalculator()
{
    float purchase,payable;
    string day;
        
    
        cout <<"=================================\n";
        cout <<"WARNING! This Program is infinite\n";
        cout <<"Press Ctrl + c to froce close\n";
        cout <<"=================================\n\n";
    
    while (1)
    {  
    
         cout <<"Enter the total Purchase Amount: $  ";
         cin >> purchase;
         cout <<"Enter the day of Purchase: ";
         cin >> day;
         if (day == "Sunday" || day == "sunday" || day == "SUNDAY")
        {
         payable = purchase - (purchase * 10) / 100;
         cout <<"Payable Amount: "<< payable;
        }
        else 
      {
        payable = purchase - (purchase * 5) / 100;
        cout <<"Payable Amount: "<< payable <<"\n";
       } 
    }
}

 




// if (cin.fail() ||  <= 0 )
//        {
//         cout <<"\n\n Invalid Input! \n\n";
//          cin.clear();
//          cin.ignore(1000,'\n');
//        }
//     else 
//     {    }
// and for discount calculator we need to change the if == sunday so that
//  it doesnt apply discount when user enters smth like fajskdfha



//         cout <<"=================================\n";
//         cout <<"WARNING! This Program is infinite\n";
//         cout <<"Press Ctrl + c to froce close\n";
//         cout <<"=================================\n\n";