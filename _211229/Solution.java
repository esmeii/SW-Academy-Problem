package _211229;

import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		
		for (int t = 1; t <= test; t++) {
			int num = sc.nextInt();
			int[] arr = new int[num];
			for (int i = 0; i < num; i++) {
				arr[i] = sc.nextInt();
			}

			for (int i = 0; i < num; i++) {
				for (int j = 0; j < num - i - 1; j++) {
					if (arr[j] > arr[j + 1]) {
						int tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}
			System.out.print("#" + t + " ");

			for (int i = 0; i < num; i++) {
				System.out.print(arr[i] + " ");
			}
			System.out.println();
		}
	}
}
