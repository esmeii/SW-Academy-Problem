// 가중치 그래프에서 임의의 점 하나를 선택한 후, n-1개의 간선을 하나 씩 추가시켜 트리 생성.
// func PrimMST(G)
// input : G, 
// output : T
//1. G에서 임의의 점 p를 시작점으로 선택 D[p]=0
//2. for( 점 p가 아닌 각 점 v에 대해) {
//  if( 간선이 그래프에 있으면 ) D[V] = 간선의 가중치
//  else D[v] = 다른 값
//3. T={p}
//4. while( T에 있는 점의 수 < n ){
//5.  T에 속하지 않은 각 점 v에 대해, D[v] 가 최소인 점과 연결된 간선을 T에 추가.
//6.  for( T에 속하지 않은 점 w에 대해) {
          //if( 간선 v의 가중치 < D[W] )
#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
typedef struct Edge{
  char v1, v2;
  int weight;
  struct Edge* next;
}Edge;
typedef struct IncidentEdge{
  char eName;
  Edge* e;
  struct IncidentEdge* next;
}IncidentEdge;
typedef struct Vertex{
  char vName;
  int isVisit;
  IncidentEdge* vHead;
  struct Vertex* next;
}
vpod makeVertex(Graph* G, char vName){
  Vertex* v = (Vertex*)malloc(sizeof(Vertex));
  v->vName = vName;
  v->isVisit = FALSE;
  v->iHead = NULL;
  v->next = NULL;
  G->vCount++;
}
  
  
void prim(Graph* G, char vName, int D[]){
  Vertex* p = findVertex(G, vName);
  IncidentEdge* q; char c;
  
  D[p->vName -97] = 0;
  for(int i = 0; i<G->vCount; i++){
    c = getMinVertex(G, D);
    


}
