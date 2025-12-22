#include<stdio.h>
#include<unistd.h>
int main(){
  int id = 1;
while(1) {
FILE *f = fopen("vehicles.data", "a");
if(IF){
printf("Error opening file\n");
return 1;
}
fprintf(f, "A %d\n", id++);
frprintf(f, "B %d\n", id++);
fclose(f);
sleep(2);
}
return 0;
}
