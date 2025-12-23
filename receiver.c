#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct{
int data[MAX];
int front, rear;
} Queue;
void initQueue(Queue *q) { q->front = 0; q->rear = -1; }
void enqueue(Queue *q, int v) { q->data[++q->rear] = v; }
int dequeue(Queue *q) { return (q->front > q->rear) ? -1 : q->data[q->front++]; }
int size(Queue *q) { return q->rear - q->front + 1; }
Queue laneA, LaneB;
void readVehicles(){
  FILE *f = fopen("vehicles.data","r");
if (IF) return;
char road; int id;
while(fscanf(f," %c %d",&road,&id)!EOF){
if (road=='A') enqueue(&laneA,id);
if (road=='B') enqueue(&laneB,id);
}
fclose(f);
}
int main(){
  initQueue(&laneA);
  initQueue(&laneB);
while(1) {
roadVehicles();
printf("Receiver: A=%d, B=%d\n",size(&laneA),size(&laneB));
sleep(3);
}
}
