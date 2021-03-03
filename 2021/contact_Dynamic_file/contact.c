#include "contact.h"


void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_sz * sizeof(struct PeoInfo));
	if (ps->data == NULL)
		return ;
	ps->size = 0;
	ps->capacity = DEFAULT_sz;
	// 把文件中已经存放的信息加载到通讯录中
	LoadContact(ps);

}
// 声明函数
void CheckCapacity(struct Contact* ps);
// 加载文件信息
void LoadContact(Contact* ps)
{
	PeoInfo tmp = {0};
	FILE* pfread = fopen("contact.dat", "rb");
	if (pfread == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	// 读取文件放到通讯录中
	while (fread(&tmp, sizeof(PeoInfo), 1, pfread))
	{
		CheckCapacity(ps);
		ps->data[ps->size] = tmp;
		ps->size++;
	}


	fclose(pfread);
	pfread = NULL;
}



// 检测容量
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		// 增容
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
			printf("增容失败\n");

	}
}


// 增加一个通讯录
void AddContact(struct Contact* ps)
{
	// 检测当前通讯录的容量
	// 如果满了，就增加空间
	// 如果不满，啥事都不干
	CheckCapacity(ps);
	// 增加数据
	printf("请输入名字:>\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>\n");
	scanf("%s", ps->data[ps->size].addr);

	ps->size++;
	printf("添加成功\n");

}
// 显示通讯录
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s \t %-4d \t %-5s \t %-12s \t %-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
// 删除指定的联系人
void DelContact(struct Contact * ps)
{
	char name[MAX_NAME];
	printf("请输入要删除联系人的姓名\n");
	scanf("%s", name);
	//1.查找要删除人的姓名
	// 找到返回名字所在的下标
	// 找不到返回-1
	int pos = FindByName(ps, name);
	//2.删除
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}


}
int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
			return i;
	}
	return -1;//找不到的情况
}
// 查找联系人
void SearchContact(const struct Contact* ps)
{
	char name [MAX_NAME];
	printf("请输入要查找人的名字\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("没有这个联系人\n");
	}
	else
	{
		printf("%-20s \t %-4s \t %-5s \t %-12s \t %-20s\n", "名字", "年龄", "性别", "电话", "地址");

		printf("%-20s \t %-4d \t %-5s \t %-12s \t %-20s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);

	}
}

// 修改指定的联系人
void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入你要修改人的姓名\n");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[pos].addr);


		printf("修改成功\n");
	}
}

void DestroyContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}

void SaveContact(Contact* ps)
{
	FILE* pfwrite = fopen("contact.dat", "wb");
	if (pfwrite == NULL)
	{
		printf("SaveContact:%s\n", strerror(errno));
		return;
	}
	//写入通讯录中的数据到文件
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(PeoInfo), 1, pfwrite);
	}


	fclose(pfwrite);
	pfwrite = NULL;
	printf("保存成功\n");
}