#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
using namespace std;

struct node{
	string name,id;
	int grade;
};
//从大到小排序 
bool cmp(struct node a,struct node b){
	return a.grade>b.grade;
} 
int main(){
	int n;//人数
	cin>>n;
	node stu;//存储学生信息的结点 
	vector<node> student;//将上面所说连接成一个结点 
	for(int i=0;i<n;i++){//输入信息 
		cin>>stu.name;
		cin>>stu.id;
		cin>>stu.grade;
		student.push_back(stu); 
	}
	sort(student.begin(),student.end(),cmp);//排序 
	cout<<student[0].name<<" "<<student[0].id<<" "<<endl;
	cout<<student[n-1].name<<" "<<student[n-1].id<<" "<<endl;
	return 0;
} 
