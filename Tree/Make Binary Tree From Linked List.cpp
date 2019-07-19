
#include <bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void convert(Node *head, TreeNode *&root);
void lvl(TreeNode *r) {
    if (r == NULL) return;
    queue<TreeNode *> q;
    q.push(r);
    while (!q.empty()) {
        TreeNode *j = q.front();
        cout << j->data << " ";
        q.pop();
        if (j->left) q.push(j->left);
        if (j->right) q.push(j->right);
    }
}
void reverses(Node **head) {
    Node *prev = NULL;
    Node *cur = *head;
    Node *nxt;
    while (cur != NULL) {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *head = prev;
}
/* Driver program to test above function*/
int main() {
    int T, i, n, l, k;
    cin >> T;
    while (T--) {
        struct Node *head = NULL;
        cin >> n;
        for (i = 1; i <= n; i++) {
            cin >> l;
            push(&head, l);
        }
        reverses(&head);
        TreeNode *root = NULL;
        convert(head, root);
        if (root == NULL) cout << "-1";
        lvl(root);
        cout << endl;
        // inorder(root);
        getchar();
    }
    return 0;
}


/*This is a function problem.You only need to complete the function given below*/
/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/
/*You are required to complete this method*/

TreeNode* newTreeNode(int data)
{
    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void convert(Node *head, TreeNode *&root) {
    if(head == NULL)
    {
        root = NULL;
        return;
    }
    queue<TreeNode*> q;

    root = newTreeNode(head->data);
    q.push(root);
    head = head->next;
    while(head)
    {
        TreeNode* parent = q.front();
        q.pop();
        TreeNode* leftchild = NULL, *rightchild = NULL;
        leftchild = newTreeNode(head->data);
        q.push(leftchild);
        head = head->next;
        if(head)
        {
            rightchild = newTreeNode(head->data);
            q.push(rightchild);
            head = head->next;
       }

       parent->left = leftchild;
       parent->right = rightchild;
        
    }
    return;

    // Your code here
}





// Input:
// 84
// 887 778 916 794 336 387 493 650 422 363 28 691 60 764 927 541 427 173 737 212 369 568 430 783 531 863 124 68 136 930 803 23 59 70 168 394 457 12 43 230 374 422 920 785 538 199 325 316 371 414 527 92 981 957 874 863 171 997 282 306 926 85 328 337 506 847 730 314 858 125 896 583 546 815 368 435 365 44 751 88 809 277 179 789

// Its Correct output is:
// 887 778 916 794 336 387 493 650 422 363 28 691 60 764 927 541 427 173 737 212 369 568 430 783 531 863 124 68 136 930 803 23 59 70 168 394 457 12 43 230 374 422 920 785 538 199 325 316 371 414 527 92 981 957 874 863 171 997 282 306 926 85 328 337 506 847 730 314 858 125 896 583 546 815 368 435 365 44 751 88 809 277 179 789
