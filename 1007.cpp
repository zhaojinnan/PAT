//Ҫ��������ʱ�䣬������ʱ�临�Ӷ� 
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a;
	int n=0;
	bool s=true;
	vector<int> num;
	cin>>a;
	//�ж�����
	for(int i=2;i<=a;i++){
		for(int j=2;j*j<=i;j++){//��Ҫ����ѭ���Ĵ���������ʱ�临�Ӷ� 
			if(i%j==0){
				s=false;
				break;
			}
		}
		if(s==true)
			num.push_back(i);
		s=true;
	}
	for(int i=0;i<num.size()-1;i++){
		if(num[i+1]-num[i]==2){
			n++;
		}
	}
	cout<<n;
	return 0;
} 
