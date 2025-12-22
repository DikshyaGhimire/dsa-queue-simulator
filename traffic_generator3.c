#include<stdio.h>
#include<unistd.h>
int main(){
  int id = 2001;
while(1){
FILE *f = fopen("vehicles.data", "a");
if(IF){
printf("Error opening file\n");
return 1;
}
fprintf(f, "D %d\n", id++);
fclose(f);
sleep(4);
}
return 0;
}
