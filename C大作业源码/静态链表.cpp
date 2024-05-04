#include<stdio.h>
using namespace std;

typedef struct Student{
	int sno;
	struct Student *next;
}STU;
//<1> “20 静态创建链表”
//静态创建一个包含有4个节点的单链表，输出这个链表的所有数据。节点包含两个域：数据域（int型），指针域。



int main(){
	STU stu1,stu2,stu3,stu4;
	STU *head,*t;
	stu1.sno = 101;
	stu2.sno = 102;
	stu3.sno = 103;
	stu4.sno = 104;
	head = &stu1;
	stu1.next = &stu2;
	stu2.next = &stu3;
	stu3.next = &stu4;
	stu4.next = NULL;
	t = head;
	int i = 0;
	do{
		i++;
		printf("stu%d.sno = %d \n",i,t->sno);
		t = t->next;
	}while(t != NULL);
	return 0;
}
