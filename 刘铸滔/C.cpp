//˼·��̰�ģ�ÿ���ڴ治��ʱѹ��ѹ�������ĸ���
#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
using namespace std;

const int maxn = 100010;
int n,m;

//�����嵥������ѹ��������
struct compress
{
    int a,b;
    compress(int _a=0,int _b=0):a(_a),b(_b) {}
    //����ѹ��������,�Ӵ�С
    bool operator<(const compress &t)const
    {
        return (a-b)>(t.a-t.b);
    }
} songs[maxn];

int main()
{
    cin>>n>>m;
    for(int i = 1; i<=n; i++)
    {
        cin>>songs[i].a>>songs[i].b;
    }
    sort(songs+1,songs+n+1);
    int curmemry = 0;
    int compressi = 1;//��ǰѹ���������±�
    int cptime = 0;//ѹ������
    for(int i = 1;i<=n;i++)
    {
        if(curmemry+songs[i].a<=m)
        {
            curmemry+=songs[i].a;
        }
        else{
            if(i>=compressi)//�˻���һ��δ��ѹ���ĸ���
            {
                i--;
            }
            if(compressi>n)
            {
                cptime = -1;
                break;
            }
            curmemry-=songs[compressi].a;
            curmemry+=songs[compressi].b;
            compressi++;
            cptime++;
        }
    }
    cout<<cptime<<endl;
    return 0;
}
