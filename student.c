#include "student.h"

int StuNo[stuCount];
int Computer[stuCount];
int Math[stuCount];
int English[stuCount];
int Chinese[stuCount];
int Physics[stuCount];

int iScoreHigh[subCount];
int iScoreLow[subCount];
int iScoreAve[subCount];
int iHighNo[subCount];
int iFineCount[subCount];
int iFailCount[subCount];

int Menuselect()
{
	int option;
	int input;

	system("cls");
	printf("\n\n\n*****************************\n");
	printf("�밴������������г���!\n");
	printf("\t1. ¼��ѧ��ѧ��\n");
	printf("\t2. ¼��ѧ���ɼ�\n");
	printf("\t3. ͳ�Ƹ��ſγ̵���߷֡���ͷֺ�ƽ���ɼ������ſγ̴ﵽ����Ͳ����������\n");
	printf("\t4. ���Ƴɼ�����\n");
	printf("\t5. ��ʾѧ���ɼ�ͳ�Ʊ�\n");
	printf("\t6. ��ʾѧ���ɼ�����\n");
	printf("\t0. �������!\n");
	printf("*****************************\n");
	printf("��������Ҫ���еĳ���ǰ�����֣�");

	while(1)
	{
		input = scanf("%d", &option);
		if(input!=1)
		{
			printf("\n\t���������ѡ:");
			fflush(stdin);
		}
		else if(option == 0) break;
		else if((option < 1)|| (option>6))
			printf("\n\t ѡ�������ѡ");
		else break;
	}

	return option;
}

int MenuHandle(int option)
{
	int quit = 0;
	switch(option)
	{
		case 1:if(InputData()==0)
			   {
				   printf("�����˳�,���������иó���!\n");
				   fflush(stdin);
				   quit = 1;
			   }
			else printf("\n ����������룬�����������....");
			getche();
			break;
		case 2:stuscore();
			printf("\n ����������룬�����������....");
			getche();
			break;
		case 3:shuju();
			printf("\n ��ɷ���ͳ�ƣ������������....");
			getche();
			break;
		case 4:paixu();
			printf("\n ��ɸ��Ƴɼ����� ,�����������....");
			getche();
			break;
		case 5:DispalyStat();
			printf("\n �����������....");
			getche();
			break;
		case 6:DispalySort();
			printf("\n �����������....");
			getche();
			break;
		case 0:quit=1;
			break;
	}

	return quit;
}

void main()
{
	int option;
	int quit;

	printf("\n\n\n\n");
	printf("\t\t**********************************************\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*        ѧ���������                        *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                        �����������...     *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t*                                            *\n");
	printf("\t\t**********************************************\n");
	getche();
	while(1)
	{
		option=Menuselect();
		quit=MenuHandle(option);
		if(quit == 1) break;
	}
}


