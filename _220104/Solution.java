package _220104;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Solution {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int test_case = 0;
		int dif = 0;
		int[] arr;
		
		
		test_case = Integer.parseInt(br.readLine());
		//sc.next();
		for (int tc = 1; tc <= test_case; tc++) {
			String s = br.readLine();
			arr = new int[10];
			for (int i = 0; i < s.length(); i++) {
				arr[s.charAt(i) - '0']++;
				if (arr[s.charAt(i) - '0'] == 1 ) {
					dif++;
					//arr[s.charAt(i)-'0']++;
				}
			}
			System.out.println("#" + tc + " " + dif);
		}

		br.close();
	}

}
