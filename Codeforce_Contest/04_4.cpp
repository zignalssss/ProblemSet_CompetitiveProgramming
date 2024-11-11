#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char pass[100];
	scanf("%s",s);

	while(1){
		scanf("%s",pass);
		if(!strcmp(strrev(s),pass)){
			printf("Welcom %s %s",s,strrev(s));
			break;
		}
	}
	return 0;
}
