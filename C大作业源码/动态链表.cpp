#include<stdio.h>
#include<malloc.h>
#define datatype char
#define maxsize 100

typedef struct node{
	int data;
	struct node *next;
}linklist;

void line(linklist *head){
	int i,j,num,k;
	char temp;
	linklist *tp,*p;
	int count_head(linklist *head);
	num=count_head(head);
	for(i=0;i<num-1;i++)
		for(j=0,tp=head->next;j<num-i-1;j++,tp=tp->next)
	{ if(tp->data>tp->next->data)
	{temp=tp->next->data;
		tp->next->data=tp->data;
		tp->data=temp;
	}
	}
	p=head->next;
	printf("�������ַ���\n");
	while(p!=NULL){
		printf(" %c",p->data);
		p=p->next;
	}
	printf("\n");
	char a;
	linklist *q;
	printf("������Ҫshanchu���ַ���\n");
	scanf("%c",&a);
	for(i=0,tp=head->next;i<num-1;i++,tp=tp->next)
		if(tp->data==a){
		q=tp;
		tp=head;
		while(tp->next!=q)tp=tp->next;
		tp->next=q->next;
	}
	k=count_head(head);
	if(k==num) printf("Ҫɾ����Ԫ�ز��ڵ�������\n");
	printf("ɾ���ĵ�����Ԫ��\n");
	p=head->next;
	while(p!=NULL){
		printf(" %c",p->data);
		p=p->next;
	}
}
/* char a;
linklist *q,*s; printf("������Ҫ������ַ���\n");
scanf("%c",&a);
s->data=a;
int count_head(linklist *head);
num=count_head(head);
for(i=0,tp=head->next;i<num-1;i++,tp=tp->next)
if(tp->data>s->data)
{
q=tp;
tp=head;
while(tp->next!=q)tp=tp->next;
s->next=tp->next;
tp->next=s;
}
p=head->next;
while(p!=NULL){
printf(" %c",p->data);
p=p->next;
}*/
int count_head(linklist *head){
	int i=0;
	//char t;
	linklist *p;
	p=head->next;
	while(p!=NULL){
		i++; p=p->next;
	}
	printf("\n");
	return i;
}
linklist *creatlink_head_head(linklist *head){ linklist *t,*p;
	char ch;
	t=(linklist *)malloc(sizeof(linklist));
	head=t;
	t->next=NULL;
	printf("������Ԫ��ֵΪ�����ַ�����������,-1Ϊ�����ַ���");
	while((ch=getchar())!= -1)
	{
		t=(linklist *)malloc(sizeof(linklist));
		t->data=ch;
		t->next=head->next;
		head->next=t;}
	return(head);
}
int main()
{
	linklist *head=NULL;
	int num;
	printf("\n ����������\n\n");
	head=creatlink_head_head(head);
	fflush(stdin);
	line(head);
	
	return 0;
}
