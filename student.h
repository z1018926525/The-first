#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <conio.h>
#include <process.h>

#define stuCount 3
#define subCount 5

extern char *cSubject[];
extern int iStuNo[];
extern int StuNo[stuCount];
extern int Computer[stuCount];
extern int Math[stuCount];
extern int English[stuCount];
extern int Chinese[stuCount];
extern int Physics[stuCount];
extern int iScoreHigh[subCount];
extern int iScoreLow[subCount];
extern int iScoreAve[subCount];
extern int iHighNo[subCount];
extern int iFineCount[subCount];
extern int iFailCount[subCount];

int Menuselect();
int MenuHandle(int option);
int InputData();
void stuscore();
void GetHigh();
void GetLow();
void GetAve();
void person1();
void person2();
void person3();
void person4();
void person5();
void SortByAve();
extern void SortByAve();
extern void shuju();
extern void stuscore();
extern void paixu();
extern void DispalyStat();
extern void DispalySort();

#endif