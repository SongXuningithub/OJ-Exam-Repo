#include <iostream>
#include <algorithm>
using namespace std;
/*
�ȴ�С��������֮��Ƚϸ����������3������ʣ����ʱ������ǰһ���黹�Ǻ�һ����
*/
struct node {
	int team;
	int num;
};
bool cmp(node a, node b) {
	return a.num < b.num;
}
int main() {
	int n;
	cin >> n;
	node *p = new node[n];
	int *minnum = new int[n];
	int t = 1;//team����
	for (int i = 0; i < n; i++) {
		cin >> p[i].num;
		p[i].team = 1;
	}
	sort(p, p + n);
	int a = 0, b = 2;
	for (int i = b+1; i < n; i++) {
		if (n - i < 4)break;//���������鲻��3����������ѭ��
		else {
			//Ϊд��
		}
	}
}