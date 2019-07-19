// C++ Program to print Bottom View of Binary Tree
#include<bits/stdc++.h>
using namespace std;
// Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references
    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
};
// Method that prints the bottom view.
void bottomView(Node *root);
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
     bottomView(root);
     cout << endl;
  }
  return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/* Tree node class
struct Node
{
    int data; //data of the node
    Node *left, *right; //left and right references
    // Constructor of tree node
    Node(int key)
    {
        data = key;
        left = right = NULL;
    }
}; */
// Method that prints the bottom view.

int height(Node* root)
{
    int l =0,r=0;
    if(root == NULL)
        return 0;
    if(root->left)
        l = height(root->left);
    if(root->right)
        r = height(root->right);
    
    return ((l>r)?l:r)+1;
}

void findbottomview(Node* root, int h, int current_distance, int width[])
{
    if(root == NULL)
        return;
    
    width[h+current_distance-1] = root->data;
    //cout<<"root data"<<root->data<< " and value is "<<width[h+current_distance-1]<<" also "<<h+current_distance-1;

    if(root->left)
        findbottomview(root->left, h, current_distance-1, width);
    
    if(root->right)
        findbottomview(root->right, h, current_distance+1, width);
       
    
}

void bottomView(Node *root)
{

    if(root == NULL)
        return;
    int totalheight = 0;
    totalheight = height(root);
    int h = 2*totalheight -1;
    int width[h];
    //cout<<" totalheight & h = "<<totalheight<<h;
    for(int i=0;i<h;i++)
    {
        width[i] = INT_MIN;
    }
    findbottomview(root,totalheight,0,width);

    //cout<<"out of the loop";

    for(int i=0;i<h;i++)
    {
        //cout<<" value of i "<<i<<"   ";
        if(width[i] == INT_MIN)
            continue;
        cout<<width[i]<<" ";    
    }
   // Your Code Here
}


/* 
For Input:
2
6
0 1 L 0 2 R  1 3 L 1 4 R  2 5 L 2 6 R  
6
0 1 L 0 2 R  1 3 L 1 4 R  2 5 L 2 6 R
*/