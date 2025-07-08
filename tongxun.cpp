#include"tx.h"

void toshow()
{
	printf("%s %s %s %s %s\n", "序号", "姓名", "性别", "电话", "地址");
}



//void addat(struct Contact* ps)
//{
//	if (ps->size == MAX)
//	{
//		printf("无法增加\n");
//	}
//	else
//	{
//		printf("输入名字\n");
//		scanf_s("%d", ps->data[ps->size].name);
//		printf("输入性别\n");
//		scanf_s("%d", ps->data[ps->size].sex);
//		printf("输入电话号码\n");
//		scanf_s("%d", ps->data[ps->size].tele);
//		printf("输入地址\n");
//		scanf_s("%d", ps->data[ps->size].ip);
//		/*printf("输入性别\n");
//		scanf_s("%s", ps->data[ps->size].sex);*/
//
//		/*printf("age\n");
//		scanf_s("%d", &ps->data[ps->size].age);*/
//
//		ps->size++;
//		printf("添加成功\n");
//	}
//}

void addat(struct Contact* ps)
{
	if (ps->size >= MAX)
	{
		cout << "无法增加" << endl;
	}
	else
	{
		cout << "输入" << endl;
		cin >> ps->data[ps->size].name >> ps->data[ps->size].sex >> ps->data[ps->size].tele >> ps->data[ps->size].ip;
		ps->size++;
		cout << "添加成功" << endl;
	}
}

void show(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("联系人为空\n");
	}
	else
	{
		int i = 0;
		/*printf("%s %s %s %s %s\n","序号", "姓名","性别", "电话", "地址");*/
		toshow();
		for (i; i < ps->size; i++)
		{
			printf("%d %s %s %s %s\n",i + 1, ps->data[i].name, ps->data[i].sex, ps->data[i].tele, ps->data[i].ip);
		}
	}
}

void delat(struct Contact* ps)
{
	if (ps->size == 0)
	{
		cout<<"无可删除"<<endl;
	}
	else
	{
		cout << "请输入要删除的序号" << endl;
		int b;
		cin >> b;
		if (b<1 || b>ps->size)
		{
			cout << "序号错误" << endl;
		}
		else
		{
			for (b; b < ps->size; b++)
			{
				/**ps->data[b-1].name = *ps->data[b].name;
				*ps->data[b-1].sex = *ps->data[b].sex;
				*ps->data[b-1].tele = *ps->data[b].tele;
				*ps->data[b-1].ip = *ps->data[b].ip;*/
				strcpy_s(ps->data[b - 1].name, ps->data[b].name);
				strcpy_s(ps->data[b - 1].sex, ps->data[b].sex);
				strcpy_s(ps->data[b - 1].tele, ps->data[b].tele);
				strcpy_s(ps->data[b - 1].ip, ps->data[b].ip);
			    
			}
			ps->size--;
			cout << "删除成功" << endl;
		}

	}
}

void find(const struct Contact* ps)
{
	
	cout <<"请输入查找人姓名"<<endl;
	/*char name[MAX_NAME];*/
	string name;
	cin >> name;
	if (ps->size == 0)
	{
		cout << "联系人为空" << endl;
	}
	else {
		for (int i = 0; i < ps->size; i++)
		{
			if (ps->data[i].name == name)
			{
				cout << "如下" << endl;
				toshow();
				cout << ps->data[i].name << " " << ps->data[i].sex << " " << ps->data[i].tele << " " << ps->data[i].ip << endl;
				break;
			}
			else if (i == ps->size - 1 && ps->data[i].name != name)
			{
				cout << "未找到" << endl;
				break;
			}
			/*else
			{ continue; }*/
		}
	}
	
}

void modifly(struct Contact* ps)
{
	if (ps->size == 0)
	{
		cout << "联系人为空,无法修改" << endl;
	}
	else
	{
		cout <<"改改谁的"<<endl;
		string name;
		/*char name[MAX_NAME];*/
		cin >> name;
		for (int i = 0; i < ps->size; i++)
		{
			if (ps->data[i].name == name)
			{
				cout << "改改啥" << endl;
				cout << "1.name" << endl;
				cout << "2.sex" << endl;
				cout << "3.tele" << endl;
				cout << "4.ip" << endl;
				int a;
				cin >> a;

				switch (a)
				{
				case 1:
					cin.ignore();
					cout << "请输入新的名字" << endl;
					/*cin >> ps->data[i].name;*/
					cin.getline(ps->data[i].name, MAX_NAME);
					/*cin.ignore();*/
					break;
				case 2:
					cin.ignore();
					cout << "变性了是吧,改改你的" << endl;
					/*cin >> ps->data[i].sex;*/
					cin.getline(ps->data[i].sex, MAX_SEX);
					/*cin.ignore();*/
					break;
				case 3:
					cin.ignore();
					cout << "改变telecommunications（大虚）" << endl;
					/*cin >> ps->data[i].tele;*/
					cin.getline(ps->data[i].tele, MAX_TELE);
					/*cin.ignore();*/
					break;
				case 4:
					cin.ignore();
					cout << "请输入新的ip地址" << endl;
					/*cin >> ps->data[i].ip;*/
					cin.getline(ps->data[i].ip, MAX_IP);
					/*cin.ignore();*/
					break;
				}
				/*cin.ignore();*/
				cout << "修改成功" << endl;
				break;
				
			}
			/*else if ()
			{
				cout << "妹找着啊" << endl;
				break;
				
			}*/
			/*else
			{
				continue;
			}*/
		}
	}
}