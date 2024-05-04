#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct ZH)

struct ZH *Create();
void Shu(struct ZH *head);
void Fang(struct ZH **head);

struct ZH{
	int z;
	struct ZH *next;
};

int main(){	
	struct ZH *head,*p;
	head=Create();
	Shu(head);
	p=head;
	while(p!=NULL){
		p=p->next ;
	}
	putchar('\n');
	Fang(&head);
	return 0;
}
//链表创建
struct ZH *Create(){
	struct ZH *head=NULL,*p,*p1;
	p=(struct ZH*)malloc(LEN);
	scanf("%d",&p->z );
	p->next =NULL;
	while(p->z !=-1){
		if(head==NULL){
			head=p;
			p1=p;
		}else{
			p1->next =p;
			p1=p;
		}
		p=(struct ZH*)malloc(LEN);
		scanf("%d",&p->z);
		p->next =NULL;
	}
	p1->next =NULL;
	return head;
}
//输出链表
void Shu(struct ZH *head){
	struct ZH *p;
	p=head;
	while(p!=NULL)
	{
		printf("%3d ->",p->z );
		p=p->next ;
	}
	putchar('\n');
}
//释放链表
void Fang(struct ZH **head){
	struct ZH *p;
	while(*head!=NULL)
	{
		p=*head;
		*head=(*head)->next ;
		free(p);
	}
	*head=NULL;
}

