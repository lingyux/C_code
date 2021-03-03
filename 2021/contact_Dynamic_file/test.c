#include "contact.h"
void menu()
{
	printf("***************************\n");
	printf("***1.add***********2.del***\n");
	printf("***3.serach********4.modify\n");
	printf("***5.show**********6.sort**\n");
	printf("***7.save**********0.exit**\n");
	printf("***************************\n");
}
int main()
{
	int input = 0;
	// 创建通讯录
	//存放1000人的信息
	struct Contact con;//con就是通讯录，包含data指针和size，容量capacity
	// 初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			// SortContact(&con);
			break;
		case SAVE:
			SaveContact(&con);
			break;
		case EXIT:
			// 销毁通讯录,释放动态开辟的内存
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}

