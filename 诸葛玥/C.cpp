#include <iostream>
#include <algorithm>
using namespace std;
/*
̰���㷨����ѹ������a[i]-b[i]�����򣬴�����ֵ����ѹ����ֱ�����Է���
*/
int main() {
	int n, m;
	cin >> n>>m;
	int *a = new int[n];
	int *b = new int[n];
	int *cha = new int[n];
	int maxsum = 0;
	int leastsum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		cha[i] = a[i] - b[i];
		maxsum += a[i];//���㲻ѹ������
		leastsum += b[i];//�������и趼ѹ����С��
	}
	if (leastsum > m) {//������и趼ѹ���Բ�����
		cout << -1;
	}
	else {
		sort(cha, cha + n);
		for (int i = n - 1; i >= 0; i--) {
			if (maxsum <= m) break;//��������˳�
			else {
				maxsum -= cha[i];//����ѹ��
				count++;//ѹ������+1
			}
		}
		cout << count;
	}
	delete a, b, cha;
	return 0;
}