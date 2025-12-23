#include<stdio.h>
#include<unistd.h>
#define MAX 100
typedef struct {
int data[MAX];
int front, rear;
} Queue;
