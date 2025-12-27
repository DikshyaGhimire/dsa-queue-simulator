#include<fstream>
#include<cstdlib>
#include<ctime>
int main(){
  std::srand(time(0));

std::ofstream A("laneA.txt");
std::ofstream B("laneB.txt");
std::ofstream C("laneC.txt");
std::ofstream D("laneD.txt");

for(int i = 1; i<=50; i++){
int r = rand() % 4;
if(r == 0) A << i << "\n";
if(r == 1) B << i << "\n";
if(r == 2) C << i << "\n";
if(r == 3) D << i << "\n";
}
A.close();
B.close();
C.close();
D.close();
return 0;
}
