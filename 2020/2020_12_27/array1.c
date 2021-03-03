//合并数组
#include<stdio.h>
int main(){
	int array[10];
	int even[5] = {0,2,4,6,8};
	int odd[5] = {1,3,5,7,9};
	int loop,index,o_len,e_len;
	o_len = e_len = 5;
	index = 0;
	for(index = 0;index < 10;index++){
		if(index %2 == 0){
			array[index] = even[(index+1)/2];
		}
		else{
			array[index] = odd[(index-1)/2];
		}
	}
	printf("偶数组 ->");
	for(loop = 0;loop < e_len;loop++)
		printf("%d",even[loop]);
	printf("\n");
	printf("奇数组 ->");
	for(loop = 0;loop < o_len;loop++)
		printf("%d",odd[loop]);
	printf("\n");
	printf("合并后数组 ->");
	for(loop = 0;loop < o_len+e_len;loop++)
		printf("%d",array[loop]);
	printf("\n");
	return 0;
}
