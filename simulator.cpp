#include <SDL2/SDL.h>
#include <iostream>
#include <fstream>
#include <queue>
using namespace std;
#define WIDTH 800
#define HEIGHT 600
#define PRIORITY_LIMIT 10
struct lane{
char name;
int vehicles;
};
int main(){
  // Read vehicle data
  ifstream file("vehicles.data");
if(!file){
cout << "Error opening vehicles.data\n";
return 1;
}
queue<lane> q;
char lane;
int count;
while (file >> lane >> count){
q.push({lane, count});
}
file.close();
SDL_Init(SDL_INIT_VIDEO);
SDL_Window* window = SDL_CreateWindow(Traffic Light Simulator(DSA)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
bool running = true;
SDL_Event event;
while(running && !q.empty()){
lane current = q.front();
q.pop();
while (SDL_PollEvent(&event)){
if (event.type == SDL_QUIT)
  running = false;
}
SDL_SetRenderDrawColor(renderer, 30, 30, 30, 255);
SDL_RenderClear(renderer);
if(current.name == 'A' && current.vehicles > PRIORITY_LIMIT){
SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
cout << "Priority lane A served("<< current.vehicles << "vehicles\n";
}
else{
SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
cout << "Serving lane" << current.name << "(" << current.vehicles << "vehicles)\n";
}
SDL_Rect light = {370, 200, 60, 150};
SDL_RenderFillRect(renderer, &light);
SDL_RenderPresent(renderer);
SDL_Delay(1500);
}
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
SDL_QUIT();
cout << "Simulation completed\n";
return 0;
}

