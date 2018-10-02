#include<stdio.h>
#include<string.h>

void main(){
	char a[1000];
	int len,i,j;
	gets(a);
	len = strlen(a);
	for (i = len - 1; i >= 0; i--){
		if (a[i] == ' '){
			for (j = i+1; a[j] != '\0'&& a[j] != ' '; j++){
				printf("%c",a[j]);
			}
			printf(" ");
		}
	}
	i = 0;
	while(a[i] != ' '){
		i++;
	}
	for (j = 0; j < i; j++){
		printf("%c",a[j]);
	}
} 











