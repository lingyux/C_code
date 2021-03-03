//数组拆分成奇数和偶数
#include<stdio.h>
int main()
{
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	int even[10],odd[10];
	int loop,e,d;
	e = d = 0;
	for(loop = 0;loop < 10;loop++)
	{
		if(array[loop]%2==0)
		{
			even[e] = array[loop];
			e++;
		}
		else
		{
			odd[d] = array[loop];
			d++;
		}
	}
	printf("原始数组 ->");
	for(loop = 0;loop < 10;loop++)
	{
		printf("%d",array[loop]);
	}
	printf("\n");
	printf("偶数组 ->");
	for(loop = 0;loop < e;loop++)
		printf("%d",even[loop]);
	printf("\n");
	printf("奇数组 ->");
	for(loop = 0;loop < d;loop++)
		printf("%d",odd[loop]);
	printf("\n");
	return 0;
}
