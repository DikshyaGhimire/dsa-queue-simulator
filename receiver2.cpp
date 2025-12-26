#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream file("vehicles.data");
if (!file) return 1;
char lane;
int count;
while (file >> lane >> count){
if(lane == 'A'){
cout << "Priority lane A detected:" << count << "vehicles" << endl;
}
}
file.close();
return 0;
}
