#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define SWAP(x,y,t)((t) = (x),(x) = (y), (y) = (t))
void makeList(int list[]){
  for(int i =0;i<SIZE; i++){
    list[i] = rand()%100 + 1;
  } //making a list with 1 to 100
}
void printList(int list[]){
  for(int i=0;i<SIZE; i++)
    printf("%d ", list[i]);
  printf("\n");
}
void findKth(int list[], int k){
  int i, j, t;//최소값을 리스트의 왼쪽에 넣을 예정임
  int min, minIndex;
  for(i =0;i<k; i++){
    min = list[i];
    minIndex = i;
    for(j =i+i; j<SIZE; j++){
      if(list[j] < min){
        min = list[j];
        minIndex = j;
      }
    }
    SWAP(list[i], list[minIndex],t);
  }
  printf("%d\n",list[--i]); 
      
}
int main(){
  int list[SIZE],k;
  srand(time(NULL));
  
  makeList(list);
  pritnList(list);
  //k번째 원소를 찾기
  scanf("%d",&k); 
  findKth(list,k);
  
  return 0;
  
}
