#include<stdio.h>
#include<string.h>
int main(){
	char str[100][100];
	int i=0;
	
	while(1){
		scanf("%s",str[i]);	
		if(strcmp(str[i],"quit") == 0 || strcmp(str[i],"exit") == 0)
			break;
		i++;
	}
	printf("\n Last word is: %s",str[i-1]);
}
