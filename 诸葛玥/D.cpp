#include <iostream>
using namespace std;
/*
�ҵ�������ͬ��d�ĸ������Ƚ����С����visit�������Ѽ�����
*/
int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	int *visit = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		visit[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int maxc = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != 0 && visit[i] == 0) {//���ڱ�����Ϊ0��a�Լ��Ѿ���֮ǰ�����Ϊ0���±�����
			int count = 1;
			double d = -(double)b[i] / (double)a[i];
			visit[i] = 1;
			for (int j = i + 1; j < n; j++) {
				if (visit[j] == 0 && d*a[j] + b[j] == 0) {//�����±��a��bΪ���ʹ����Ҹ��ݹ�ʽ����Ϊ0��count++
					visit[j] = 1;
					count++;
				}
			}
			maxc = maxc < count ? count : maxc;//�Ƚ�ÿ���е����ֵ
		}
	}
	cout << maxc << endl;
	delete a, b, visit;
	return 0;
}