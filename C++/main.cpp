#pragma region IMPORTS
#pragma endregion
#include <string>
#include <vector>
#include <cstring>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

#pragma region VARIABLES
#pragma endregion
string version = "0.2.0";
string menuTitle = "";
int columns, rows, menuOption = 0, menu = 0;
bool menuLoop = true;
vector<pair<string, int>> menuActions;

#pragma region FUNCTIONS
#pragma endregion
// imp Get console size
void consoleSize() {
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
  
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

}

// imp Draw box box with text
void drawBox( const char*  data ) {

    for ( int i = 0; i < columns;  i++ ) { printf("="); }
    for ( int i = 0; i < (columns - strlen(data)) / 2;  i++ ) { printf(" "); }
    printf("%s\n", data); 
    for ( int i = 0; i < columns;  i++ ) { printf("="); }

}

// imp Draw line
void hr() {
    
    for ( int i = 0; i < columns;  i++ ) { printf("="); }

}

// imp Moving options handler
void drawMenu( const vector<pair<string, int>>& vector ) {

    int iItr = 0;

    for ( auto i = vector.begin(); i != vector.end(); i++ ){

        // imp Show arrow on option
        if (menuOption == iItr) {
            printf("> "); 
        } else {
            printf("  ");
        }

        printf("%s\n", i->first.c_str());

        iItr++;

    }

}

#pragma region PROGRAM ACTIONS
#pragma endregion

void program_actions(int x) {

    switch (x) {
        case -1: system("CLS"); exit(0);
        
        default: printf("Error\n"); break;
    }

}

#pragma region MAIN CODE
#pragma endregion
int main() {
    
    // Infinite bucle
    while (true) {

        // Always update UI
        consoleSize();
        system("CLS");

        // Main menu
        if ( menu == 0 ) {
            menuTitle = "Main menu";
            string cpsql_name = "Cpsql " + version + " | " + menuTitle;
            drawBox( cpsql_name.c_str() );

            printf( "A C++ PostgreSQL Tool\n" );
            hr();

            menuActions.clear();

            menuActions.push_back(make_pair("Access PostgresSQL", 0));
            menuActions.push_back(make_pair("Exit tool", -1));
            
        }

        // Draw actions from menu
        drawMenu(menuActions);

        // Update when UP or DOWN press
        while (menuLoop) {
        
            if ( (GetAsyncKeyState(VK_UP) & 0x8000) || (GetAsyncKeyState(VK_DOWN) & 0x8000) ) { 

                if ( GetAsyncKeyState(VK_UP) ) {
                    menuOption--;
                    if (menuOption < 0) {
                        menuOption = menuActions.size() - 1;  // Ir al último elemento
                    }

                } else {
                    menuOption++;
                    if (menuOption >= menuActions.size()) {
                        menuOption = 0;  // Volver al primer elemento
                    }

                }
                
                break; 

            }

            if ( GetAsyncKeyState(VK_RETURN) & 0x8000) {

                // printf("%s\n", ().c_str() );
                program_actions(menuActions[menuOption].second);
                
                break; 

            }

            Sleep(100); 

        }

    }

}