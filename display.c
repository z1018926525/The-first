#include "student.h"

//��ʾѧ���ɼ�ͳ�Ʊ�
void DispalyStat(void)
{
	int i;

	system("cls");  //����
	printf("\n\n\n"); 
	printf("��Ŀ       ��߷�   ��ͷ�  ƽ���� ��������  ����������  ��߷�ѧ��ѧ��\n");

	for(i=0;i<subCount;i++)
	{
		printf("%s  %6d  %6d  %6d  %7d  %9d\t\t%d\n",cSubject[i],iScoreHigh[i],iScoreLow[i],iScoreAve[i],iFineCount[i],iFailCount[i],iHighNo[i]);
	}
}

//��ʾѧ���ɼ������
void DispalySort(void)
{
	int i;

	system("cls");

	printf("\n\n\n");
	printf("ѧ��ѧ��  ������ɼ�  ��ѧ�ɼ�  Ӣ��ɼ�  ���ĳɼ�  �����ɼ�\n");
	for(i=0;i<stuCount;i++)
	{
		printf("%8d %10d %8d %8d %8d %8d\n",StuNo[i],Computer[i],Math[i],English[i],Chinese[i],Physics[i]);
	}
}