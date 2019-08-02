#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int N=21;
int rownum[] = {-1,0,1,0};
int colnum[] = {0,1,0,-1}

struct point
{
    int x = -1;
    int y = -1;
};

struct queuenode{
    point pt;
    int dis;
}

struct Queue{
    int front,rear,size,capacity;
    queuenode *arr;
};

Queue* createqueue(int capacity)
{
    if(capacity <0)
        capacity = -capacity;
    Queue queue = new Queue;
    queue->front = 1;
    queue->rear = capacity-1;
    queue->size = 0;
    queue->arr = new queuenode[capacity*sizeof(queuenode)];
    return queue;
}

bool is_empty(Queue *queue)
{
    return (queue->size == 0);
}

bool is_full(Queue *queue)
{
    return (queue->capacity == queue->rear);
}

queuenode in_front(Queue *queue)
{
    if(is_empty(queue))
        return NULL;
    return (queue->arr[queue->front]);
}

queuenode in_rear(Queue *queue)
{
    if(is_empty(queue))
        return NULL;
    return (queue->arr[queue->rear]);
}

void enqueue(Queue *queue, queuenode value)
{
    if(is_full(queue))
        return;
    queue->rear = queue->rear + 1;
    queue->arr[queue->rear] = value;
    queue->size = queue->size + 1;
}

queuenode dequeue(Queue *queue)
{
    if(is_empty(queue))
        return NULL;
    queuenode value = queue->arr[queue->front];
    queue->front = queue->front + 1;
    queue->size = queue->size + 1;
    return queuenode;
}

bool isvalid(int i, int j, int m, int n)
{
    return (i>=0 && j>=0 && i<m && j<n);
}

int dfs(int arr[N][N], int m, int n, point s, point d)
{
    if(arr[s.x][s.y] != 1 && arr[d.x][d.y] != 1)
        return -1;
    if(s.x == d.x && s.y == d.y)
        return 0;
    bool visited[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            visited[i][j] = false;
    }
    visited[s.x][s.y] = true;
    Queue queue = create(N*N);
    queuenode src = {s,0};
    enqueue(queue,src);

    while(!is_empty(queue))
    {
        queuenode current = in_front(queue);
        point pt = current.pt;

        if(pt.x == d.x && pt.y == d.y)
            return current.dis;
        queuenode spoil = deque(queue);
    }

}

int main()
{
    int t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        int arr[N][N];
        point s,d;
        s.x = 0;
        s.y = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        cin>>d.x>>d.y;
        int dis = bfs(arr,m,n,s,d);
        cout<<dis<<endl;
    }
	//code
	return 0;
}