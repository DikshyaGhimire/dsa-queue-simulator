#include <SDL2/SDL.h>
#include <iostream>
#include <queue>
#include <fstream>
#include <vector>
#include "common.h"
const int VEHICLE_TIME = 500;
std::queue<Vehicle> AL2[4];
LightState lights[4] = {RED, RED, RED, RED};
int currentRoad = 0;
void loadlane(const char* filename, std::queue<Vehicle>& q){
  std::ifstream file(filename);
int id;
while (file >> id){
q.push({id});
}
file.close();
}
int getPriorityRoad(){
  for(int i = 0; i < 4; i++){
if(AL2[i].size() > 10)
  return i;
  }
return -1;
}
void serveRoad(int road){
  lights[road] = GREEN;
int count = AL2[road].size();
int serve = std::min(3, count);
for(int i = 0; i < serve; i++){
if(!AL2[road].empty()){
AL2[road].pop();
SDL_Delay(VEHICLE_TIME);
}
}
lights[road] = RED;
}
void drawlights(SDL_Renderer* r){
  SDL_SetRenderDrawColor(r, 0, 0, 0, 255);
SDL_RenderClear(r);
for(int i = 0; i < 4; i++){
if(lights[i] == GREEN)
  SDL_SetRenderDrawColor(r, 0, 255, 0, 255);
else
  SDL_RenderDrawColor(r, 255, 0, 0, 255);
SDL_Rect rect = {100 + i * 150, 250, 50, 50};
SDL_RenderFillRect(r, &rect);
}
SDL_RenderPresent(r);
}
int main(){
  SDL_Init(SDL_INIT_VIDEO);
SDL_Window* window = SDL_CreateWindow("Traffic Junction Simulator", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
loadLane("laneA.txt", AL2[0]);
loadLane("laneB.txt", AL2[1]);
loadLane("laneC.txt", AL2[2]);
loadLane("laneD.txt", AL2[3]);
bool running = true;
SDL_Event e;
while (running){
while (SDL_PollEvent(&e)){
if(e.type == SDL_QUIT)
  running = false;
}
int priority = getPriorityRoad();
if(priority != -1){
serveRoad(priority);
} else{
serveRoad(currentRoad);
currentRoad = (currentRoad + 1) % 4;
}
drawLights(renderer);
}
SDL_DestroyRenderer(renderer);
SDL_DestroyWindow(window);
SDL_Quit();
return 0;
}
