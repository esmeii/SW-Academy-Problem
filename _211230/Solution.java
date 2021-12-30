package _211230;

import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int index = 0;
		int l = 0;
		int u = 0;
		int x = 0;
		
		int test = s.nextInt();
		int[] res = new int[test];
		for (int i = 1; i <= test; i++) {
			l = s.nextInt();
			u = s.nextInt();
			x = s.nextInt();
			
			if (x > u) {
				res[index++] = -1;
			}
			if (x < l) {
				res[index++] = l - x;
			} 
			if (x >= l && x <= u) {
				res[index++] = 0;
			}
		}
		for(int i = 0;i<res.length;i++) {
			System.out.println("#"+(i+1)+" "+res[i]);
		}
		s.close();

	}

}
