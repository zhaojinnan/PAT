#include<stdio.h>
void sum_change(int sum){
	char str[10];
	int i=0;
	sprintf(str,"%d",sum);
	while(str[i]!='\0'){
		switch(str[i]){
			case '0':printf("ling");break;
			case '1':printf("yi");break;
			case '2':printf("er");break;
			case '3':printf("san");break;
			case '4':printf("si");break;
			case '5':printf("wu");break;
			case '6':printf("liu");break;
			case '7':printf("qi");break;
			case '8':printf("ba");break;
			case '9':printf("jiu");break;
			default:break;
		}
		i++;
		if(str[i]!='\0')
			printf(" ");
		else
			printf("\n");	
	}
}
int main(){
	char a[100];
	int j,sum=0,i=0;
	scanf("%s",a);
	while(a[i]!='\0'){
		j=a[i]-'0';
		sum+=j;
		i++;
	}
	sum_change(sum);
	return 0;
}
