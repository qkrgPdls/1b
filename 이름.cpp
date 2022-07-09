#include <stdio.h>
#include <stdlib.h>
int main (){
	int i, n;
	scanf("%d", &n);
	int* aa = (int*)malloc(4*n);
	for(i = 0;i < n;i++) scanf("%d", &aa[i]);
	int a = aa[0];
	for(i = 1;i < n;i++){
		if(aa[i] != 0) a += aa[i];
		else {
			for(int j = 1;j < n;j++){
				if(aa[i-j] != 0) {
					
					a -= aa[i-j];
					break;
				}
			}
		}
		
		printf("%d   ", a);
	}
	printf("%d", a);
	return 0;
}
