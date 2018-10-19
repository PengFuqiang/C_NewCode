#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		int i = 0;
		i = a;
		int flag = 0;
		int c;
		while(i++<=b){
			c = pow(i/100,3) + pow((i/10)%10,3) + pow(i%10,3);
			if (c == i){
				flag++;
				printf("%d\t",i);
			}
		}
		if (flag == 0){
			printf("no");
		}
		printf("\n");
	}
	return 0;
}




