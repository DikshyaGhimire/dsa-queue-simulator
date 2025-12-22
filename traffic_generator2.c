#include<stdio.h>
#include<unistd.h>
int main(){
  int id = 1001; //start ID different from first generator
while(1){
FILE *f = fopen("Vehicles.data", "a");
if(IF){
printf("Error opening file\n");
return 1;
}
fprintf(f, "C %d\n", id++);
fclose(f);
sleep(3); //slower generator
}
return 0;
}
