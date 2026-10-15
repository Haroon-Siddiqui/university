#include <iostream>
#include <windows.h>

using namespace std;

void printMazeBorders();
void gotoxy(int x, int y);


int main()
{
    system("cls");

    int x, y;

    printMazeBorders();

    
}

void printMazeBorders()
{
    // 93 x 32 ,playable 91 x 30
    cout << "\n";
    cout << "######################################################################\n";
    cout << "#   ^                                                                #\n";
    cout << "#  /P\\                                                               #\n";
    cout << "# |===|                                                              #\n";
    cout << "#        #######                                                     #\n";
    cout << "#              #                 ^                                   #\n";
    cout << "#              #                /E\\                                  #\n";
    cout << "#                              |===|             ########            #\n";
    cout << "#                                            #      #                #\n";
    cout << "#                                            #      #                #\n";
    cout << "#          ########                                 #                #\n";
    cout << "#          #                                        #                #\n";
    cout << "#          #                  #                                      #\n";
    cout << "#          #                  #                                      #\n";
    cout << "#          #                  #                                      #\n";
    cout << "#                             #                                      #\n";
    cout << "#                             #                                      #\n";
    cout << "#                             #                                      #\n";
    cout << "#                                            ###############         #\n";
    cout << "#                                                                    #\n";
    cout << "#                                                               ^    #\n";
    cout << "#      ##############                                          /E\\   #\n";
    cout << "#                                                             |===|  #\n";
    cout << "#                                             ########               #\n";
    cout << "#                                                                    #\n";
    cout << "#            ###############                                         #\n";
    cout << "#                                                                    #\n";
    cout << "#                                                                    #\n";
    cout << "#   ^                                                                #\n";
    cout << "#  /E\\                                                               #\n";
    cout << "# |===|                                                              #\n";
    cout << "######################################################################\n";
    cout << "\n\n";
    cout << "\t\t P = Player\n";
    cout << "\t\t E = Enemy\n";
}
void gotoxy(int x, int y)
{
    COORD coordinates;

    coordinates.X = x;
    coordinates.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



//   ^
//  /T backslash
// |===|