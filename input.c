#include "student.h"

int InputData()
{
	int i;
	int flag = 0;   //�����б�����������ı�־

	system("cls");
	for(i=0;i<stuCount;i++)
	{
		printf("�������%dλѧ��ѧ��:",i+1);
		scanf("%d",&StuNo[i]);
	}
	printf("ѧ��¼����ɣ�\n");
	flag = 6;
	for(i=0;i<stuCount;i++)
	{
		if(StuNo[i]==StuNo[i+1])
		{
			printf("�������ѧ�����ظ�!");
			flag = 0;
		}
		break;
	}
	if(flag == 6)
		return 1;
	else 
	{
		fflush(stdin);
		return 0;
	}	
}

//¼��ѧ���ɼ���
void stuscore()
{
	int i;

	printf("�밴������˳������ѧ���ɼ���\n");
	printf("����� ��ѧ Ӣ�� ���� ����\n");
	for(i=0;i<stuCount;i++)
	{
		scanf("%d%d%d%d%d",&Computer[i],&Math[i],&English[i],&Chinese[i],&Physics[i]);
		printf("���������Ƿ���ȷ!����������������ɼ�!\n");
	}
	printf("ѧ���ɼ�¼�����!\n");
}
