package _220105;

import java.util.Arrays;
import java.util.Scanner;

public class Solution {

	public static void main(String[] args) throws Exception {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		for (int t = 1; t <= T; t++) {
			int p = s.nextInt();
			int res = 0;
			int[] arr = new int[p];
			for (int i = 0; i < p; i++) {
				arr[i] = s.nextInt();
			}
			Arrays.sort(arr);
			res = arr[0]*arr[arr.length-1];
			System.out.println("#"+t+" "+res);
		}
	}
}
