#include <stdio.h>
#include <string.h>

int main() {
	int num = 0, m = 0;
	char a[50000] = {0};
	scanf("%s%d",a, &m);
	int len = strlen(a);
	int j = 0, k = 0;
	for (j = 0; j < len; j++) {
		while (k > 0 && a[k-1] < a[j] && num < m) {
			k--;
			num++;
		}
		a[k] = a[j];
		k++;
	}
	a[len - m] = '\0';
	printf("%s\n",a);
	return 0;
} 
