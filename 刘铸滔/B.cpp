/**
��Ŀ���⣺�����N-1�β�������ֵ�����С������
˼·��������ȱ��������潻��ĳһλ֮��Ľ���ͽ���ǰ���Ƚϣ�������С���
*/
#include <iostream>

using namespace std;
const int maxn = 105;
int q;
char p[maxn];

//������i�͵�i+1�����ֵ�λ��
void swapi(int i)
{
    char t = p[i];
    p[i] = p[i+1];
    p[i+1] = t;
}
int main()
{
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        for(int i = 1;i<=n;i++)
        {
            cin>>p[i];
        }
    }
    return 0;
}
