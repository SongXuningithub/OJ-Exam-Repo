#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int solution(int L,int v,int l,int r){
	int ans=0;
	int total=L/v;//�ܹ��Ƶ����� 
	int dec=(r-l)/v;//�ڵ�ס��
	if(l%v==0||r%v==0) dec++;//l�����ڵ� 
	ans=total-dec;
	return ans;
}
int main(){
	int t;
	cin>>t;
	int L,v,l,r;
	for(int i=0;i<t;i++){
		cin>>L>>v>>l>>r;
		cout<<solution(L,v,l,r)<<endl;
	}
	return 0;
}
