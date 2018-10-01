#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s1[100][10];
	char temp1[10],temp2[10];
	char output[10];
	int num,i,j,d;
	while(scanf("%d",&num)!=EOF){
		for(i = 0;i < num;i++){
			scanf("%s",s1[i]);
		}
		strcpy(temp1,s1[0]);
		for(i = 0;i < num;i++){
			for(j = i+1;j < num;j++){
				strcpy(temp1,s1[i]);
				strcpy(temp2,s1[j]);
				strcat(temp1,s1[j]);
				strcat(temp2,s1[i]);
				if(strcmp(temp1,temp2) < 0){
					strcpy(output,s1[i]);
					strcpy(s1[i],s1[j]);
					strcpy(s1[j],output);
				}
			}
			printf("%s",s1[i]);
		}
		return 0;
	}
} 
