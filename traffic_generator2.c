#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream file("vehicles.data");
if(!file) return 1;
file << "A 12" << endl;
file.close();
return 0;
}
