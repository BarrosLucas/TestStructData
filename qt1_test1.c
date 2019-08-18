#include <stdio.h>
#include <stdlib.h>

typedef struct fila{
    int *queue;
    int size;
    int first;
    int last;
} fila;

int push(fila*damae, int value){
    //printf("Value: %d\n",value);
    (damae)->last++;
    if(((damae)->last - (damae)->first)==((damae)->size)){
        (damae)->size *= 2;
        int * newArray=(int *) malloc(sizeof(int)*(damae)->size);
        int i;
        for(i = damae->first;i < damae->last;i++){
            newArray[i] = damae->queue[i];
        }
        damae->queue = newArray;


    }
    (damae)->queue[(damae)->last] = value;
    //(damae)->queue[]
    return 1;
}

int pop(fila*damae){
    if((damae)->last < (damae)->first){
        return -1;
    }else{
        int value = (damae)->queue[(damae)->first];
        (damae)->first++;
        return value;
    }
}

void printList(fila*damae){
	int i;
    for(i = (damae)->first;i<=(damae)->last;i++){
        printf("%d ",(damae)->queue[i]);
    }
}

int main (void){

    fila daputa;


    daputa.size=5;
    daputa.first=0;
    daputa.last=-1;
    daputa.queue = (int *) malloc(sizeof(int)*daputa.size);

	int i;
    for(i=0;i<50;i++){
        push(&daputa,i);
    }

    printList(&daputa);
}
