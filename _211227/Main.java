package _211227;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String input = "";
		String output = "";
		int temp;
		int limit;
		
		Scanner sc = new Scanner(System.in);
		input = sc.nextLine();
		limit = input.getBytes().length;
		
		if(limit>80) {
			System.out.println("문자열의 최대 길이는 80byte");
		}
		else {
			for(int i = 0;i<input.length();i++) {
				temp = (int)input.charAt(i);
				if(97<temp && temp <= 122) {
					output += (char)(temp-32);
				}
				else {
					output += (char)temp;
				}
			}
			System.out.println(output);
		}
		sc.close();
	}

}
