//要考虑运行时间，降低其时间复杂度 
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a;
	int n=0;
	bool s=true;
	vector<int> num;
	cin>>a;
	//判断素数
	for(int i=2;i<=a;i++){
		for(int j=2;j*j<=i;j++){//需要控制循环的次数，降低时间复杂度 
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
