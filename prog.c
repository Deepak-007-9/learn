#include<stdio.h>

#define MAXSIZE 5

int queue[MAXSIZE],front=-1,rear=-1;

int isEmpty(){
    front = rear = -1;
}

int dequeue(){
    if(isEmpty)
    printf("underflow");

}


int main() {
    int choice,value;

    for (int i = 0; i < MAXSIZE; i++) {
        scanf("%d", &value);
        queue[i] = value;
    }

    for (int i = 0; i < MAXSIZE; i++) {
        printf("%d\n", queue[i]);
    }

    return 0;
}