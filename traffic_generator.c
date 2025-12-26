#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  ofstream file("Vehicles.data");
if(!file) return 1;
srand(time(0));
file << "A" << rand() % 15 << endl;
file << "B" << rand() % 10 << endl;
file << "C" << rand() % 10 << endl;
file << "D" << rand() % 10 << endl;
file.close();
return 0;
}
