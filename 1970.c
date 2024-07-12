#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>

const int mod = 46337; // 用于生成伪随机数的模数
int id = 1; // 全局变量，用于生成伪随机数

// 生成伪随机数的函数
int myrand(int x)
{
    id += 2024; // 增加一个固定值
    id %= mod; // 取模
    id += x;
    id %= mod;
    id = id * id; // 平方
    id %= mod; // 取模
    id ++;
    id %= mod;
    while (id % 2 == 0 || id % 3 == 0)
    {
        id += 5; // 增加一个固定值
        id %= mod; // 取模
    }
    while(id == 1){
        id ++;
        id %= mod;
        while (id % 2 == 0 || id % 3 == 0)
        {
            id += 5; // 增加一个固定值
            id %= mod; // 取模
        }
    }
    return id % mod; // 返回伪随机数
}

// 链表节点的结构体定义
struct NODE
{
    int data; // 节点中的数据
    struct NODE * pnext; // 指向下一个节点的指针
};

typedef struct NODE Node;

// 将数据插入到链表中的函数
void insert_to_list(Node * phead, int data)
{
    Node* p;
    // 遍历链表直到尾部
    for(p = phead; p->pnext; p = p->pnext);
    // 创建新节点并插入数据
    p->pnext = (Node*)malloc(sizeof(Node));
    p = p->pnext;
    p->pnext = NULL;
    p->data = data;
}

int main()
{
    Node a, b, *p; // 声明两个链表节点和一个指针
    int n, i, d, j; // 声明变量用于控制循环和存储随机数
    a.pnext = b.pnext = NULL; // 初始化链表头指针为NULL
    scanf("%d", &n); // 获取用户输入的整数n，表示随机数的个数

    // 生成n个随机数，并根据是否为素数将其插入到两个链表中
    for(int i = 0; i < n; i++)
    {
        d = myrand(n); // 调用myrand()函数生成伪随机数
        // 判断随机数是否为素数
        int f = 0;
        for(int j = 2; j < d; j++)
            if(d % j == 0){
              f = 1;
              break; 
            }                   
        if(f) 
            insert_to_list(&b, d); // 是合数，插入到链表b中
        else 
            insert_to_list(&a, d); // 是素数，插入到链表a中
    }

    // 打印链表a的内容
    printf("list 1: \n");
    for(p = a.pnext; p; p = p->pnext)
        printf("%d\t", p->data);

    // 打印链表b的内容
    printf("\nlist 2: \n");
    for(p = b.pnext; p; p = p->pnext)
        printf("%d\t", p->data);
    
    return 0;
}