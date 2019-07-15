
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
void verticalOrder(Node *root);
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
     verticalOrder(root);
     cout << endl;
  }
  return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/* A binary tree node has data, pointer to left child
   and a pointer to right child 
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

void findminmax(Node* root, int *min, int *max, int curheight)
{
    if(root == NULL)
        return;
    if(curheight < *min)
        *min = curheight;
    if(curheight > *max)
        *max = curheight;

    findminmax(root->left,min,max,curheight-1);
    findminmax(root->right,min,max,curheight+1);
}

void printlinebyline(Node* root, int value, int curposition)
{
    if(root == NULL)
        return;
    if(curposition == value)
        cout<<root->data<<" ";
    
    printlinebyline(root->left,value,curposition-1);
    printlinebyline(root->right,value,curposition+1);
}

void verticalOrder(Node *root)
{
    int max=0, min=0;
    findminmax(root,&min, &max, 0);
    //cout<<min<<" "<<max;
    for(int i=min;i<=max;i++)
    {
        printlinebyline(root,i,0);
    }
    //Your code here
}
