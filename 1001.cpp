#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	int m=0;
	while(i!=1){
		if(i%2==0){
			i=i/2;
			m+=1;
		}
		else{
			i=3*i+1;
			i=i/2;
			m+=1;
		}
	}
	printf("%d\n",m);
	return 0;
}
