#include<stdio.h>
#include <stdbool.h>
#define SIZE 5
typedef struct{
int data[SIZE];
int head;
int tail;
int count;
}CircularBuffer;
//Check if buffer is empty!
bool is_empty(CircularBuffer *cb){
    return cb->count==0;
}
//Check if buffer is full!
bool is_full(CircularBuffer *cb){
    return cb->count==SIZE;
}
//Lets us push a value to the buffer
bool push(CircularBuffer *cb,int val){
    if(is_full(cb)){return false;} 
  cb->data[cb->tail]=val;
  cb->tail=(cb->tail +1)%SIZE;
  cb->count++;
  return true;
}
//lets us pop a value:
bool pop(CircularBuffer *cb,int *val){
    if(is_empty(cb)){return false;}
    *val=cb->data[cb->head];
    cb->head=(cb->head +1)%SIZE;
    cb->count--;
    return true;
}
int main (){
    return 0;
}