#include<stdio.h>
int main(){
	int count = 0,start,end;
	scanf("%d %d",&start,&end);
	for(int i = start;i <= end;i++){
		count+=i;
	}
	printf("%d",count);
	return 0;
}
