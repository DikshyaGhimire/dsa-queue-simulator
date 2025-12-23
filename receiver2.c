typedef struct {
int data[MAX];
int front, rear;
} Queue;
void initQueue(Queue *q){ q->front = 0; q->rear = -1;}
void enqueue(Queue *q,int v){q->data[++q->rear]=v;}
int dequeue(Queue *q){return (q->front>q->rear)?-1:q->data[q->front++];}
int size(Queue *q){return q->rear-q->front+1;}
Queue laneC, laneD;

