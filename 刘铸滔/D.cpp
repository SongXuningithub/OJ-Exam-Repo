/**
����˼·��������������Ŀ����ת��Ϊai/bi������ͬ��
���Թ����ڽӱ����սڵ�洢��
������ڵ�ai/bi��ǰ��ڵ�ai/bi��ͬ�Ľڵ�洢��һ��vector��
*/

#include <iostream>
#include <vector>
using namespace std;
const int maxn = 2000000;
const int INF = 0x3f3f3f3f;
struct node{
int a,b;
double c;
}e[maxn];
vector<double> g[maxn];
int main()
{
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>e[i].a>>e[i].b;
        if(e[i].b = 0)
            e[i].c = -1.0;
        e[i].c = (double)e[i].a/e[i].b;
    }
    int i = 1;
    while(i<n)
    {
        for(int j = 1;j<=i;j++)
        {
            if(e[j].c==g[i])
            {
                g[i].push_back(e[j].c);
            }
            else
            {
                i++;
                g[i].push_back(e[j].c);
                continue;
            }
        }
        i++;
    }
    //����g,�ҵ�g[i].size()����һ�������Ƿ��ؽ��
    return 0;
}
