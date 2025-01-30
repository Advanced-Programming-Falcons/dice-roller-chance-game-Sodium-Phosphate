#include <iostream>
#include <string>
#include "dice.hpp"
#include <cstdlib>
#include <ctime>
#include <raylib.h>
using namespace std;


int main(void){

    srand(time(NULL));
    Die dice(6);

    InitWindow(800, 600, "Splice");
    SetTargetFPS(60);
    int roll = 0;

    Texture2D BigBuschy = LoadTexture("Assets/BigBuschy.png");
    Texture2D Buschy = LoadTexture("Assets/Buschy.png");
    Texture2D cheeseMenu = LoadTexture("Assets/cheeseMenu.png");
    Texture2D cheeseVend = LoadTexture("Assets/cheeseVend.png");
    Texture2D guardLeft = LoadTexture("Assets/guardLeft.png");
    Texture2D machine = LoadTexture("Assets/machine.png");  
    Texture2D images[6] = {BigBuschy, Buschy, cheeseMenu, cheeseVend, guardLeft, machine};

    while(!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
            if(IsKeyPressed(KEY_SPACE)){roll = dice.Roll();}
            DrawText("Space to Roll", 320, 50, 25, BLACK);
            DrawTexture(images[roll-1], 50, 100, WHITE);
        EndDrawing();
    }
    UnloadTexture(BigBuschy);
    UnloadTexture(Buschy);
    UnloadTexture(cheeseMenu);
    UnloadTexture(cheeseVend);
    UnloadTexture(guardLeft);
    UnloadTexture(machine);
    CloseWindow();
    return 0;
}