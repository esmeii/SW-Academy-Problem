//small group 피봇보다 작은 숫자의 그룹
//large group 피봇보다 큰 숫자의 그룹
//large group에서 k번째 작은 숫자가 있는 경우에는

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

//피봇을 뽑고
//small 그룹과 large 그룹을 선정한다.
void makeList(int list[]){
  for(int i=0;i<SIZE;i++){
    list[i] = rand()% 100+1;
    for(int j=0; j<i; j++){
      if(list[i] == list[j])
        i--;
    }
  }
}
void printList(int list[]){
  for(int i=0; i<SIZE; i++)
    printf("%d ",list[i]);
}
int partition(int list[], int left, int right){
  int pivot, temp, low, high;
  
  pivot = list[left];
  low = left;
  high = right +1;
  do{
    do low++; while(list[low] <pivot);
    do high--; while(list[high] > pivot);
    if(low < high) SWAP(list[low], list[high],temp);
  }while(low < high);
  
  SWAP(list[left], list[high], temp);
  return high;
}
int findKth(int list[], int left, int right, int k){
  int p = partition(list, left, right); 
  int s = (p -1) - left+1;
  if(k<=s){
    return findKth(list, left, p-1,k);
  }
  else if(k == s + 1) return list[p];
  else return findKth(list, p+1, right, k-s-1);
}
  
int main(){
  int list[SIZE],k;
  srand(time(NULL));
  makeList(list);
  scanf("%d",&k);
  printf("%d \n",  findKth(list, 0,SIZE-1, k);
  }
