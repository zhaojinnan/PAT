#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main(){
	int a;
	stringstream str;
	string b;
	cin>>a;
	str<<a;
	str>>b;
	for(int i=0;i<b.length();i++){
		int c=int(b[i]-'0');
		int num=1;
		if(b.length()==3){
			for(int j=0;j<c;j++){
				if(i==0){
					cout<<'B';
				}
				else if(i==1){
					cout<<'S'; 
				}
				else{
					char dd=num+'0';
					cout<<dd;
					num+=1;
				}			
			}
		}
		else if(b.length()==2){
			for(int j=0;j<c;j++){
				if(i==0){
					cout<<'S';
				}
				else{
					char dd=num+'0';
					cout<<dd;
					num+=1;	
				}
			}
		}
		else{
			for(int j=0;j<c;j++){
				char dd=num+'0';
				cout<<dd;
				num+=1;		
			}
		}
	}
	return 0;
} 
