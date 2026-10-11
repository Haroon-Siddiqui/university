#include <iostream>
#include <windows.h>

using namespace std;

void printMazeBorders();
void gotoxy(int x, int y);
void movingPlayer(int x,int y);

int main()
    {
        // system("cls");
        
        int x = 1, y = 3;

        printMazeBorders();
        
        while(x < 43 && y < 17)
       {
            movingPlayer(x,y);
            x=x+1;
            y=y+1;
       }
        
        gotoxy (0,18);
        cout<<"\n";
        return 0;
    } 


void printMazeBorders()
    {
        // boundary x=43 , boundary y = 17
        cout <<"############################################\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"#                                          #\n";
        cout <<"############################################\n";
    }
void gotoxy(int x, int y)
{
    COORD coordinates;
    
    coordinates.X = x;
    coordinates.Y = y;
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void movingPlayer(int x,int y)
{
    gotoxy (x,y);
    
    cout <<"P";

    Sleep(800);

    gotoxy (x,y);
    
    cout <<" ";
}
