
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
// A wrapper over rightViewUtil()
void rightView(struct Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
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
     rightView(root);
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
}; */

void printright(Node* root, int *maxheight, int currentheight)
{
    if(root == NULL)
        return;
    if(currentheight > *maxheight)
    {   
        cout<<root->data<<" ";//<<*maxheight; 
        *maxheight +=1;
        //cout<<"newheight"<<*maxheight;
    }
    if(root->right)
        printright(root->right,maxheight, currentheight+1);
    if(root->left)
        printright(root->left,maxheight, currentheight+1);
    
}
// Should print right view of tree
void rightView(Node *root)
{
    if(root == NULL)
        return;
    int height = -1;
    printright(root, &height, 0);
   // Your Code here
}
