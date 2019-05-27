#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	while (scanf("%d",&n)!=EOF) {
		char proxy[1000][16];
		char server[2000][16];
		for (int i = 0; i < n; i++) {
			scanf ("%s",proxy[i]);
		}
		int m;
		scanf("%d",&m);
		for (int i = 0; i < m; i++) {
			scanf("%s", server[i]);
		}
		
		int index = 0, count = 0, flag = 1;
		while (flag&&index!=m) {
			int max = 0;
			for (int i = 0; i < n; i++) {
				int j = index;
				while(strcmp(proxy[i],server[j]) && j<m) {
					j++;
				}
				if (j-index > max) {
					max = j-index;
				}
			}
			if (max == 0) {
				flag = 0;
			}
			count++;
			index+=max;
		}
		if (flag) {
			printf("%d\n", count-1);
		} else {
			printf("-1\n");
		}
	}
} 





















