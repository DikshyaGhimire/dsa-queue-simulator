#include <iostream>
#include <fsream>
using namespace std;
int main(){
  ifstream file("vehicles.data");
if (!file) return 1;
char lane;
int count;
while (file >> lane >> count){
cout << "lane" << lane << "has" << count << "vehicles" << endl;
}
file.close();
return 0;
}
