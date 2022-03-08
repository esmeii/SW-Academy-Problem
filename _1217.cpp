#include <stdio.h>
 
int Mul(int N, int M){
 
    if (M == 1)
        return N;
    return N * Mul(N, --M);    
}
 
int main(){
 
    int test_case;
    int N, M, result;
 
    for (int T=0; T<10; T++){
        scanf("%d",&test_case);
        scanf("%d %d",&N,&M);
        result = Mul(N, M);
        printf("#%d %d\n",test_case,result);
    }
}
