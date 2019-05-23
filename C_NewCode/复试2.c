#include <stdio.h>

int Count(int n) {
	int count = 0;
	int i = 0;
	for (i = 1; i*i < n; i++) {
		if (n%i == 0) {
			count += 2;
		}
	}
	if (i*i == n) {
		count ++;
	}
	return count;
}

int main() {
	int num;
	int a;
	int i; 
	while (scanf("%d",&num) != EOF){
			for (i = 0; i < num; i++) {
				scanf("%d", &a);
				printf("%d\n", Count(a));
		}
	
	}
	

	return 0;
}


