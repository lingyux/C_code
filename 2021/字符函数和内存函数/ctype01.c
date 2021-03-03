#include <stdio.h>
#include <ctype.h>

int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
			arr[i] = tolower(arr[i]);
		i++;
	}
	printf("%s\n", arr);
	return 0;
}