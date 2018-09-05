#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

typedef char ElementType;
typedef struct node{
    ElementType data[MaxSize];
    int top;  //标记栈顶数据
} *SeqStack;
//初始化
void InitNode(SeqStack *L) {
    (*L) = (SeqStack)malloc(sizeof(struct node));
    (*L)->top = -1;
}
//进栈
void PushStack(SeqStack L, ElementType x) {
    if (L->top == MaxSize - 1) {
        printf("满了");
    }
    else {
        L->top++;  //入栈所以加1
        L->data[L->top] = x;
    }
}
//出栈
void PopStack(SeqStack L, ElementType *x) {
    if (L->top == -1) {
        printf("空的");
    }
    else {
        *x = L->data[L->top];
        L->top--;
    }
}
//遍历输出
void PrintNode(SeqStack L) {
    for (int i = 0; i <= L->top; i++) {
        printf("%c", L->data[i]);
    }
    printf("\n");
}
int main() {
    SeqStack s;
    ElementType c;
    ElementType* a;
    a = &c;  //y指向c，为了出栈用
    InitNode(&s);
    printf("输入入栈数据");
    do{
    	scanf("%c",&c);
    	PushStack(s,c);
	}while(getchar()!='\n'&&s->top<=MaxSize-1);
    PrintNode(s);
   	do{
    	PopStack(s, a);
		printf("出栈元素是%c\n", *a);
	}while(s->top>-1);
    PrintNode(s);
}


//两栈共享空间
/*typedef struct
{
    ElementType data[MaxSize];
    int top1;
    int top2;
}sqStack;

//添加元素
void push(sqStack *e,ElementType a,int Stacknumber)
{
    if(e->top1+1==e->top2)
        return;
    if(Stacknumber==1)
        e->data[++e->top1]=a;
    if(Stacknumber==2)
        e->data[--e->top2]=a;

}

//弹出元素
int pop(sqStack *e,ElementType *a,int Stacknumber)
{
    if(Stacknumber==1)

    {
        if(e->top1==-1)
        exit(0);

        *a=e->data[e->top1--];
    }

    else if (Stacknumber==2)
    {

        if(e->top2==MaxSize)
        exit(0);

        *a=e->data[e->top2++];
    }
    return ok;

}*/
