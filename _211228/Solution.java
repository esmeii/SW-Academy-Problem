package _211228;

import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		/*
		 * �Ϸ�� 24�ð��̴�. 24�ð��� �ð迡���� �Ϸ簡 �������� �����ؼ� ���� �� �������� ������, ������������ ���ݱ��� �帥 �ð��� ��������
		 * �ð��� ǥ���Ѵ�. ���� ���, ������ ���� 8�ö�� ��20�á��� ���� �÷� ǥ���� �� �ִ�. ������ ǥ���ϴ� ������ ����� ��0�á��ӿ�
		 * �����϶�. ������ ������������ ��Ȯ�� A�ð��� ������. ������ ��Ȯ�� B�ð��� �� �����ٸ�, 24�ð��� �ð迡�� �� ���� �� ���ϱ�?
		 * 
		 * [�Է�] ù ��° �ٿ� �׽�Ʈ ���̽��� �� T�� �־�����. �� �׽�Ʈ ���̽��� ù ��° �ٿ��� �� ���� ���� A, B (0 �� A, B ��
		 * 23)�� ���� �ϳ��� ���̷� �ΰ� ������� �־�����.
		 * 
		 * [���] �� �׽�Ʈ ���̽�����, ���� A���� ��Ȳ���� ������ B�ð��� ������ �� �ð� �Ǵ����� ����Ѵ�.
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
				System.out.println("�ð��� 0���� 23���� �Դϴ�.");
			}
			bTime = s.nextInt();
			if (bTime < 0 && bTime > 23) {
				System.out.println("���ϴ� �ð��� 0���� 23���� �Դϴ�.");
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
