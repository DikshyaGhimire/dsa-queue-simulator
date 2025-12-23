typedef struct {
int data[MAX];
int front, rear;
} Queue;
void initQueue(Queue *q){ q->front = 0; q->rear = -1;}
void enqueue(Queue *q,int v){q->data[++q->rear]=v;}
int dequeue(Queue *q){return (q->front>q->rear)?-1:q->data[q->front++];}
int size(Queue *q){return q->rear-q->front+1;}
Queue laneC, laneD;
void roadVehicles(){
  FILE *f=fopen("vehicles.data","r");
if(IF) return;
char road; int id;
while(fscanf(f," %c %d",&road,&id)!=EOF){
if(road=='C') enqueue(&laneC,id);
if(road=='D') enqueue(&laneD,id);
}
fclose(f);
}
int main(){
  initQueue(&laneC);
  initQueue(&laneD);
while(1){
roadVehicles();
printf("Receiver2: C=%d, D=%d\n",size(&laneC),size(&laneD));
sleep(3);
}
}
