#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
bool com(const pair<int,int> a,const pair<int,int> b){
	return a.second<b.second;
}

int main(){
	int n;
	int *team=new int[n];//��¼ÿ��ѧ���ĶӺ� 
	memset(team,0,sizeof(team));
	
	cin>>n;
	vector<pair<int,int> > student;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		student.push_back(make_pair(i,temp));
	}
	
	sort(student.begin(),student.end(),com);
	int res=0,k=0;
	int teamIndex=1;
	int 
	//ֱ��ѡ������������ѧ����Ȼ���ж�Ҫ��Ҫ������ĸ������������
	//��������������¼��뿪ͷΪѧ��i�Ķ� kѧ����Ҫ����student[k].second-student[i]<student[k+2]-student[k]&&k+2<n 
	for(int i=0;i<n;i++){
		team[student[i].first]=teamIndex;
		
		teamIndex++; 
	}
	
}
