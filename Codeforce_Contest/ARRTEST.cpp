#include<stdio.h>
int main(){
	int arr[10];
	int index,val;
	for(int i = 0;i < 10 ; i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&index);
	printf("%d",arr[index-1]);
	return 0;
}
