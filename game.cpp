#include <iostream>
#include <windows.h>

using namespace std;

void printMazeBorders();
void gotoxy(int x, int y);
void movingPlayerX(int x,int y);
void movingPlayerY(int x,int y);
void movingPlayerXY(int x,int y);
void enemy();

int main()
    {
         //system("cls");
        
        int x = 1, y = 2;

        printMazeBorders();

    while(1)
    {
        while(y < 5)
       {
            movingPlayerY(x , y);
            y=y+1;                   
        }
        while(x < 10)
        {
            movingPlayerX(x , y);
            x=x+1;        
        }
        while(x < 30 || y < 10)
        {
            movingPlayerXY(x , y);
            x=x+2;
            y=y+1;        
        }
        while(x < 43)
        {
            movingPlayerX(x , y);
            x=x+1;
        }
        Sleep(200);
        enemy();
        x=1, y=2;
    }
    
    } 


void printMazeBorders()
    {
        // boundary x=43 , boundary y = 17
        cout <<"############################################\n";
        cout <<"#                                          #\n";
        cout <<"#     #########----------|                 #\n";
        cout <<"#         #              |                 #\n";
        cout <<"#                        |   #############*#\n";
        cout <<"#         #              |   #             #\n";
        cout <<"#         #              |   #             #\n";
        cout <<"#         #####        #######             #\n";
        cout <<"#         #                  #             #\n";
        cout <<"#         #                  #             #\n";
        cout <<"#         #                  #             #\n";
        cout <<"#         #                  #             #\n";
        cout <<"#         #                                #\n";
        cout <<"#         ------- #########                #\n";
        cout <<"#                                         E#\n";
        cout <<"############################################\n";
        cout <<"\n\n";
        cout <<"\t\t P = Player\n";
        cout <<"\t\t E = Enemy\n";
    }
void gotoxy(int x, int y)
{
    COORD coordinates;
    
    coordinates.X = x;
    coordinates.Y = y;
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void enemy()
{
    gotoxy(42, 15);
    
    cout<<"E";

}
void movingPlayerX(int x,int y)
{
    gotoxy (x,y);
    
    cout <<"P";

    Sleep(150);

    gotoxy (x,y);
    
    cout <<" ";
}
void movingPlayerY(int x,int y)
{
    gotoxy (x,y);
    
    cout <<"P";

    Sleep(150);

    gotoxy (x,y);
    
    cout <<" ";
}
    
void movingPlayerXY(int x,int y)
{
    gotoxy (x,y);
    
    cout <<"P";

    Sleep(250);

    gotoxy (x,y);
    
    cout <<" ";
}
