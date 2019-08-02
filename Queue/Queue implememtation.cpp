#include<bits/stdc++.h>

using namespace std;

struct Queue{
    int front, rear, size, capacity;
    int *arr;
};

Queue* create(int capacity)
{
    if(capacity<0)
        capacity = -capacity;
    Queue* queue = new Queue;
    queue->capacity = capacity;
    queue->front = 1;
    queue->size = 0;
    queue->rear = 0;//capacity-1;
    queue->arr = new int[capacity*sizeof(int)];
    return queue;
}

bool is_full(Queue* queue)
{
    return (queue->capacity == queue->size);
}

bool is_empty(Queue* queue)
{
    return (queue->size == 0);
}

int in_front(Queue* queue)
{
    if(is_empty(queue))
        return INT_MIN;
    return (queue->arr[queue->front]);
}

int in_rear(Queue* queue)
{
    if(is_empty(queue))
        return INT_MIN;
    return (queue->arr[queue->rear]);
}

void enqueue(Queue* queue, int value)
{
    if(is_full(queue))
    {
        return;
    }
    queue->rear = queue->rear + 1;
    queue->arr[queue->rear] = value;
    queue->size = queue->size + 1;
}

int dequeue(Queue* queue)
{
    if(is_empty(queue))
    {
        return INT_MIN;
    }
    int value = queue->arr[queue->front];
    queue->front = queue->front +1;
    queue->size = queue->size -1;
    return value;
}

int main()
{
    Queue* queue = create(1000);  
  
    enqueue(queue, 10);  
    enqueue(queue, 20);  
    cout << "Rear item is " << in_rear(queue) << endl;  
    enqueue(queue, 30);  
    enqueue(queue, 40);  
    cout<<"queue"<<endl;
    cout << "Front item is " << in_front(queue) << endl;  
    
    cout<<dequeue(queue)<<endl<<" dequeued from queue\n";  
  
    cout << "Front item is " << in_front(queue) << endl;  
    cout << "Rear item is " << in_rear(queue) << endl;  
    return 0;
}