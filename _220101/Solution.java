package _220101;

import java.util.Scanner;

//happy new year
public class Solution {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int min, max = 0;
		int test_case = 0;
		int num = 0;
		
		test_case = s.nextInt();
		
		
		for (int i = 1; i <= test_case; i++) {
			num = s.nextInt();
			int arr[] = new int[num];
			for (int j = 0; j < num; j++) {
				arr[j] = s.nextInt();
			}
			min = 0;
			max = 0;
			for (int j = 1; j < num; j++) {
				if (arr[j - 1] - arr[j] < 0) {
					min = min > (arr[j - 1] - arr[j]) ? (arr[j - 1] - arr[j]) : min;
				} else if (arr[j - 1] - arr[j] > 0) {
					max = max > (arr[j - 1] - arr[j]) ? max : arr[j - 1] - arr[j];
				}
			}
			System.out.println("#"+i+" "+(-min)+" "+max);
		}
		s.close();
	}
}
