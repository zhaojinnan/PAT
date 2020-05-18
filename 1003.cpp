#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

//对数据进行判断,字符串类型 
bool JudgeOfData(string str){
	int temp1,temp2;
	int p_num=0;
	int a_num=0;
	int t_num=0;
	int p_pos=str.find('P');
	int t_pos=str.find('T');
	//判断字母的个数 
	for(int i=0;i<str.length();i++){
		if(str[i]=='P'){
			p_num+=1;
		}
		if(str[i]=='A'){
			a_num+=1;
		}
		if(str[i]=='T'){
			t_num+=1;
		}
	}
	//进行字符串的判断 
	if(p_num==1&&t_num==1&&a_num>0&&(p_num+a_num+t_num)==str.length()){
		temp1=t_pos-1-p_pos;
		temp2=str.length()-t_pos-1;
		if(p_pos*temp1==temp2){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
} 
int main(){
	//输入字符串的个数
	int maxsize;
	vector<string> str;
	cin>>maxsize;
	while(maxsize!=0){
		string data;
		cin>>data;
		str.push_back(data);
		maxsize-=1;
	}
	for(int i=0;i<str.size();i++){
		if(JudgeOfData(str[i]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
	return 0; 
} 
