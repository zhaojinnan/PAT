#include<iostream>
#include<string>
#include<vector>
#include<algorithm> 
using namespace std;

struct node{
	string name,id;
	int grade;
};
//�Ӵ�С���� 
bool cmp(struct node a,struct node b){
	return a.grade>b.grade;
} 
int main(){
	int n;//����
	cin>>n;
	node stu;//�洢ѧ����Ϣ�Ľ�� 
	vector<node> student;//��������˵���ӳ�һ����� 
	for(int i=0;i<n;i++){//������Ϣ 
		cin>>stu.name;
		cin>>stu.id;
		cin>>stu.grade;
		student.push_back(stu); 
	}
	sort(student.begin(),student.end(),cmp);//���� 
	cout<<student[0].name<<" "<<student[0].id<<" "<<endl;
	cout<<student[n-1].name<<" "<<student[n-1].id<<" "<<endl;
	return 0;
} 
