#include "tx.h"
//ͨѶ¼���ܣ�
//1.�����Ϣ
//����һ����ϢӦ�ð����������绰����ַ�ȡ�
//2.���Ӻ�����Ϣ
//3.ɾ��ָ����Ϣ
//4.����ָ��������Ϣ
//5.�޸�
//6.��ӡ������Ϣ
void zcd() {
	printf("*****************************************\n");
	printf("*** 1 .add                   2.del   ****\n");
	printf("*** 3 .find                  4.modify ***\n");
	printf("*** 5 .show                  6.sort  ****\n");
	printf("****0.exit                          *****\n");
	printf("*****************************************\n");
}

int main()
{
	int a = 0;
	//int size = 0;//��¼��ǰͨѶ¼��Ϣ����
	////scanf_s("%d", &a);
	//struct peoinfo con[MAX];//�ɺϲ�
	struct Contact con;//�ϲ�֮��
	Initcon(&con);
	do {
		zcd();
		/*scanf_s("%d", &a);*/
		cin >> a;
		//cin.ignore();//��ջ�����
		switch (a)
		{
			case 1:
				/*addat(con,&size);*/
				addat(&con);
				break;
			case 2:
				delat(&con);
				break;
			case 3:
				find(&con);
				break;
			case 4:
				modifly(&con);
				break;
			case 5:
				show(&con);
				break;
			case 6:
				//sort(&con);
				break;
			case 0:
				printf("�˳�\n");
				
				break;
			default:
				printf("����������������룡\n");
				break;
		}
		/*cin.ignore();*///��ջ�����
		//system("cls");//����
	} while (a);
	return 0;
}