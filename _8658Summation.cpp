#include <stdio.h>
int main(void)
{
	int test_case;
	int T; int num = 0;
    int remain =1, divisor =1; 
    int sum[10] ={0,};
    
	scanf("%d", &T);
	for (test_case = 1; test_case <= T; ++test_case)
	{
		for(int i =0;i<10; i++){
        	scanf("%d", &num); 
             	if(num / (divisor*1000000) > 0){
                    sum[i] += (num/ (divisor*1000000));
                    num = num% (divisor*1000000);}
                if(num/ (divisor*100000) > 0){
                    sum[i] += (num/ (divisor*100000));
                    num = num% (divisor*100000);
                }
                 if(num/ (divisor*10000) > 0){
                    sum[i] += (num/ (divisor*10000));
                    num = num% (divisor*10000);
                }
                 if(num/ (divisor*1000) > 0){
                    sum[i] += (num/ (divisor*1000));
                    num = num% (divisor*1000);
                }
                if(num/ (divisor*100) > 0){
                    sum[i] += (num/ (divisor*100));
                    num = num% (divisor*100);
                }
                if(num/ (divisor*10) > 0){
                    //printf("%d\t%d\t%d\n", test_case, i, sum[i]);
                    sum[i] += (num/ (divisor*10));
                    num = num% (divisor*10);
                }
                 if(num/ (divisor*1) > 0){
                    sum[i] += (num/ (divisor*1));
                    num = num% (divisor*1);
                }
        }
        //for(int i=0;i<10; i++) printf("%d\t",sum[i]);
        int max =sum[0]; int min =sum[0];
        for(int i =0; i<10; i++){
         	max = max> sum[i] ? max :sum[i];
            min = min< sum[i] ? min: sum[i];   
        }
        printf("#%d %d %d\n", test_case, max, min);
		for(int i = 0; i<10; i++) sum[i] = 0;
	}
	return 0; 
}
