#include <stdio.h>
int main(void)
{
	int test_case;
	int T;
	setbuf(stdout, NULL);
	scanf("%d", &T);
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int numOfStd = 0;
        scanf("%d", &numOfStd);
        printf("#%d %d\n", test_case, numOfStd/3);
	}
	return 0; 
}
