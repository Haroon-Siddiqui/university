#include <iostream>

using namespace std;

int main()
{
    int input, reverse;
    cout << "Enter a number: ";
    cin >> input;

    //while(1)
    //{
        reverse = input % 10; 
        
        reverse *= 10;

        cout<<reverse;
    //}
}