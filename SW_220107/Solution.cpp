#define _CRT_SECURE_NO_WARNINGS
#include<iostream> //cin�� ����ϱ� ����
#include<cstring>
#include<string>
using namespace std; // std ���� �����̽��� ���

int map[102][102];
int check[102][102];
int dir_x[4] = { 0,1,0,-1 };
int dir_y[4] = { 1,0,-1,0 };
int result = 0;
void dfs(int x, int y) {
    int chance = 0;
    check[y][x] = 1; // �ߺ� Ž�� ����
    for (int i = 0; i < 4; i++) {

        int next_x = x + dir_x[i];
        int next_y = y + dir_y[i];

        if (map[next_y][next_x] == 3) {
            result = 1;
        }
        else if (map[next_y][next_x] == 0 && check[next_y][next_x] == 0 && result == 0) { // result�� �˻�, �������� �湮�ϸ� Ž�� ����

            dfs(next_x, next_y);
        }
    }
}
int main() {
	int T = 10;
	int idx = 0; // Test case ��ŭ ������ �ε���
	while (idx++ < T) {
		int n;

		cin >> n; // Ű���� �Է�

		memset(map, -1, sizeof(map));// �޸��� ������ ���ϴ� ũ�⸸ŭ setting
        string s;

        int start_x = 0;
        int start_y = 0;

        for (int i = 1; i < 101; i++) {
            cin >> s;

            for (int j = 1; j < 101; j++) {
                map[i][j] = s[j - 1] - '0';

                if (map[i][j] == 2) {
                    start_y = i;
                    start_x = j;
                }
            }
        }
        dfs(start_x, start_y);
        if (result == 1)
            cout << "#" << idx << " 1" << endl;
        else
            cout << "#" << idx << " 0" << endl;
        result = 0;
        memset(check, 0, sizeof(check));
	}
}
