#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int n)//ѭ������Ĵ���
{
    struct node *p,*head,*s;
    p=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    p=head;
    int i=1;

    while(i<=n){
        s=(struct node *)malloc(sizeof(struct node));
        s->data=i++;
        p->next=s;
        p=s;
    }
    s->next=head->next;
    free(head);

    return s->next;
}

int main()
{
    int m=41;
    int n=3;
    int i;
    struct node  *p=create(m);
    struct node *temp;

    while(p!=p->next)
    {
        for(i=1;i<n;i++)
            p=p->next;
        printf("%-4d",p->data);

        temp=p->next;
       p->next=temp->next;//���ӳ���

       free(temp);
       p=p->next;

    }
    printf("%d",p->data);//����Ӯ��

    return 0;
}
