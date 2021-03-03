#include<stdio.h>

int fun(char* s)
{
	char t[80];
	int i,j;
	for(i = 0; s[i] ;i++) //将字符串S拷贝至T
		t[i] = s[i];
	t[i] = '\0';
	for(i = 0,j = 0; t[i] ; i++)
		if(t[i] >= '0'&&t[i] <= '9')
		{
			s[j++] = '$';
			s[j++] = t[i];
		}
		else
			s[j++] = t[i];
	s[j] = '\0';
	return 0;
}

int main()
{
	char s[80];
	printf("Enter a string:\n");
	scanf("%s",s);
	fun(s);
	printf("The result : %s\n",s);
	return 0;
}