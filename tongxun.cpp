#include"tx.h"

void toshow()
{
	printf("%s %s %s %s %s\n", "���", "����", "�Ա�", "�绰", "��ַ");
}



//void addat(struct Contact* ps)
//{
//	if (ps->size == MAX)
//	{
//		printf("�޷�����\n");
//	}
//	else
//	{
//		printf("��������\n");
//		scanf_s("%d", ps->data[ps->size].name);
//		printf("�����Ա�\n");
//		scanf_s("%d", ps->data[ps->size].sex);
//		printf("����绰����\n");
//		scanf_s("%d", ps->data[ps->size].tele);
//		printf("�����ַ\n");
//		scanf_s("%d", ps->data[ps->size].ip);
//		/*printf("�����Ա�\n");
//		scanf_s("%s", ps->data[ps->size].sex);*/
//
//		/*printf("age\n");
//		scanf_s("%d", &ps->data[ps->size].age);*/
//
//		ps->size++;
//		printf("��ӳɹ�\n");
//	}
//}

void addat(struct Contact* ps)
{
	if (ps->size >= MAX)
	{
		cout << "�޷�����" << endl;
	}
	else
	{
		cout << "����" << endl;
		cin >> ps->data[ps->size].name >> ps->data[ps->size].sex >> ps->data[ps->size].tele >> ps->data[ps->size].ip;
		ps->size++;
		cout << "��ӳɹ�" << endl;
	}
}

void show(struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("��ϵ��Ϊ��\n");
	}
	else
	{
		int i = 0;
		/*printf("%s %s %s %s %s\n","���", "����","�Ա�", "�绰", "��ַ");*/
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
		cout<<"�޿�ɾ��"<<endl;
	}
	else
	{
		cout << "������Ҫɾ�������" << endl;
		int b;
		cin >> b;
		if (b<1 || b>ps->size)
		{
			cout << "��Ŵ���" << endl;
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
			cout << "ɾ���ɹ�" << endl;
		}

	}
}

void find(const struct Contact* ps)
{
	
	cout <<"���������������"<<endl;
	/*char name[MAX_NAME];*/
	string name;
	cin >> name;
	if (ps->size == 0)
	{
		cout << "��ϵ��Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < ps->size; i++)
		{
			if (ps->data[i].name == name)
			{
				cout << "����" << endl;
				toshow();
				cout << ps->data[i].name << " " << ps->data[i].sex << " " << ps->data[i].tele << " " << ps->data[i].ip << endl;
				break;
			}
			else if (i == ps->size - 1 && ps->data[i].name != name)
			{
				cout << "δ�ҵ�" << endl;
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
		cout << "��ϵ��Ϊ��,�޷��޸�" << endl;
	}
	else
	{
		cout <<"�ĸ�˭��"<<endl;
		string name;
		/*char name[MAX_NAME];*/
		cin >> name;
		for (int i = 0; i < ps->size; i++)
		{
			if (ps->data[i].name == name)
			{
				cout << "�ĸ�ɶ" << endl;
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
					cout << "�������µ�����" << endl;
					/*cin >> ps->data[i].name;*/
					cin.getline(ps->data[i].name, MAX_NAME);
					/*cin.ignore();*/
					break;
				case 2:
					cin.ignore();
					cout << "�������ǰ�,�ĸ����" << endl;
					/*cin >> ps->data[i].sex;*/
					cin.getline(ps->data[i].sex, MAX_SEX);
					/*cin.ignore();*/
					break;
				case 3:
					cin.ignore();
					cout << "�ı�telecommunications�����飩" << endl;
					/*cin >> ps->data[i].tele;*/
					cin.getline(ps->data[i].tele, MAX_TELE);
					/*cin.ignore();*/
					break;
				case 4:
					cin.ignore();
					cout << "�������µ�ip��ַ" << endl;
					/*cin >> ps->data[i].ip;*/
					cin.getline(ps->data[i].ip, MAX_IP);
					/*cin.ignore();*/
					break;
				}
				/*cin.ignore();*/
				cout << "�޸ĳɹ�" << endl;
				break;
				
			}
			/*else if ()
			{
				cout << "�����Ű�" << endl;
				break;
				
			}*/
			/*else
			{
				continue;
			}*/
		}
	}
}