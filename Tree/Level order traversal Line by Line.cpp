
#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void levelOrder(struct Node* node);
/* Helper function to test mirror(). Given a binary
   search tree, print out its data elements in
   increasing sorted order.*/

void inOrder(struct Node* node)
{
  if (node == NULL)
    return;
  inOrder(node->left);
  printf("%d ", node->data);
  inOrder(node->right);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     levelOrder(root);
     cout<< endl;
  }
  return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/* A binary tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
//You are required to complete this method
void levelOrder(Node* node)
{
    if(node == NULL)
        return;

    queue<Node*> q;
    q.push(node);
    while(!q.empty())
    {
      int size = q.size();
      while(size>0)
      {
        Node* temp = q.front();
        q.pop();
        if(temp->left != NULL)
          q.push(temp->left);
        if(temp->right != NULL)
          q.push(temp->right);
        cout<<temp->data<<" ";
        size--;
      }
      cout<<"$ ";
    }
        
  //Your code here
}


/*Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1 $ 3 2  $
10 $ 20 30 $ 40 60 $ */