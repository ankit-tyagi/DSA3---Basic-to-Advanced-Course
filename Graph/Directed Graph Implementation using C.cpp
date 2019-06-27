#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define N 6

struct graph
{
    struct node *head[N];
};

struct node{
    int des;
    struct node *next; 
};

struct edge{
    int src,des;
};

struct graph *creategraph(struct edge edges[], int n)
{
    int i=0;
    struct graph *graph = (struct graph*)malloc(sizeof(struct graph));

    for(i=0;i<n;i++)
        graph->head[i]=NULL;
    for(i=0;i<n;i++)
    {
        int src = edges[i].src;
        int des = edges[i].des;

        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        newnode->des=des;
        newnode->next=graph->head[src];
        graph->head[src] = newnode;

    }

    return graph;
}

void printgraph(struct graph* graph)
{
	int i;
	for (i = 0; i < N; i++)
	{
		struct node* ptr = graph->head[i];
		while (ptr != NULL)
		{
			printf("(%d -> %d)", i, ptr->des);
			ptr = ptr->next;
		}

		printf("\n");
	}
}

int main()
{
    struct edge edges[] =
	{
		{ 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
		{ 3, 2 }, { 4, 5 }, { 5, 4 }
	};

    int n = sizeof(edges)/sizeof(edges[0]);
    struct graph *graph = creategraph(edges,n);
    printgraph(graph);
    return 0;
}
