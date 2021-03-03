// 交换数组元素
#include<stdio.h>
int main(){
	int a[10][10],transpose[10][10],r,c,i,j;
	printf("输入矩阵的行与列:\n");
	scanf("%d %d",&r,&c);
	printf("\n输入矩阵元素：\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			printf("输入元素 a%d%d:\n",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("\n输入矩阵：\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
			if(j==c-1)
				printf("\n\n");
		}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			transpose[j][i] = a[i][j];
		}
	printf("\n转换后矩阵：\n");
	for(i=0;i<c;i++)
		for(j=0;j<r;j++){
			printf("%d ",transpose[i][j]);
			if(j==r-1)
				printf("\n\n");
		}
	return 0;
}
