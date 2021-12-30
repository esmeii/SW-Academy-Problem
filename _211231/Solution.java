package _211231;

import java.util.*;

public class Solution {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int test = 0;	
		String str = "";
		test = s.nextInt();
		s.nextLine();
		for(int i =1;i<=test;i++) {
			str = s.nextLine().replace("a", "")
					.replace("e", "")
					.replace("i", "")
					.replace("o", "")
					.replace("u", "");
			System.out.println("#"+test+" "+str);
		}
		
		s.close();
	}

}
