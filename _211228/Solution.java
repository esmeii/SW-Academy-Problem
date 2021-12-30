package _211228;

import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		/*
		 * 하루는 24시간이다. 24시간제 시계에서는 하루가 자정에서 시작해서 다음 날 자정에서 끝나며, 자정에서부터 지금까지 흐른 시간을 기준으로
		 * 시각을 표기한다. 예를 들어, 지금이 오후 8시라면 “20시”와 같은 꼴로 표현할 수 있다. 자정을 표기하는 유일한 방법은 “0시”임에
		 * 유의하라. 지금은 자정에서부터 정확히 A시간이 지났다. 앞으로 정확히 B시간이 더 지난다면, 24시간제 시계에서 그 때는 몇 시일까?
		 * 
		 * [입력] 첫 번째 줄에 테스트 케이스의 수 T가 주어진다. 각 테스트 케이스의 첫 번째 줄에는 두 개의 정수 A, B (0 ≤ A, B ≤
		 * 23)이 공백 하나를 사이로 두고 순서대로 주어진다.
		 * 
		 * [출력] 각 테스트 케이스마다, 현재 A시인 상황에서 앞으로 B시간이 지나면 몇 시가 되는지를 출력한다.
		 */
		int aTime = 0;
		int bTime = 0;
		int caseNum = 0;
		int[] res;
		
		Scanner s = new Scanner(System.in);
		caseNum = s.nextInt();
		res = new int [caseNum];
		for (int i = 0; i < caseNum; i++) {
			aTime = s.nextInt();
			if (aTime < 0 && aTime > 23) {
				System.out.println("시간은 0부터 23까지 입니다.");
			}
			bTime = s.nextInt();
			if (bTime < 0 && bTime > 23) {
				System.out.println("더하는 시간은 0부터 23까지 입니다.");
			}
			res[i] = aTime + bTime;
			if(res[i] > 23) {
				res[i] -= 24;
			}
		}
		for(int i = 0;i<res.length;i++) {
			System.out.print("#"+(i+1)+" ");
			System.out.println(res[i]);
		}
	}

}
