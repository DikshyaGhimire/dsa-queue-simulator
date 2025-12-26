#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream file("vehicles.data");
if (!file) return 1;
file << "B 5" << endl;
file.close();
return 0;
}
