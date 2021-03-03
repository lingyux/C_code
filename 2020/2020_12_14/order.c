#include<stdio.h>
int main() {
	int i, j, k;
	int a[3];
	int max=0,min=0,mid=0;
	printf("请输入三个数字：\n");
	scanf_s("%d%d%d", &i, &j, &k);
	a[0] = i;
	a[1] = j;
	a[2] = k;
	min = a[0];
	for (int m = 0; m < 3; m++) {
		if (a[m]<min) {
			min = a[m];	
		}
	}
	printf("%d\n", min);
	for (int m = 0; m < 3; m++) {
		if (a[m] > max) {
			max = a[m];
			
		}
		else {
			max = max;
		}
	}
	for (int m = 0; m < 3; m++) {
		if (a[m] != max && a[m] != min) {
			mid = a[m];
			
		}
	}
	
	printf("%d\n", mid);
	printf("%d\n", max);
	
}
