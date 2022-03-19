//https://swexpertacademy.com/main/code/problem/problemDetail.do?contestProbId=AXpz3dravpQDFATi
#include <stdio.h>
int main(void)
{
	int test_case;
	int T;
	int res = -1; //결과를 담을 res
    
	setbuf(stdout, NULL);
	scanf("%d", &T);
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a,b;
        scanf("%d %d", &a, &b);
        if(a > 9 || b > 9) {
            res = -1;
        	printf("#%d %d\n", test_case, res);
        }else{
            res = a*b;
       		printf("#%d %d\n", test_case, res);
        }
	}
	return 0;
}
