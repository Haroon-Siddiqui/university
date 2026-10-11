#include <iostream>
using namespace std;

main ()
{
        // Defining data type
        
        int a , b;
        
        //Taking input
        
        cout << "Enter two Numbers for value swapping";
        
        cin >>a >>b;
        
        
        // Program logic
        
        a=a+b;
        
        b=a-b;
        
        a=a-b;
        
        //Final output
        
        cout << "value of a is "<<a <<" and value of b is "<<b;
        
        return 0;


}
 