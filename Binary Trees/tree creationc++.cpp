#include <iostream>
#include <stdio.h>
#include "Queuec++.h"
using namespace std;

class Tree
{
private:
    Node *root;

public:
    Tree()  // Constructor needs to be public
    {
        root = NULL;
    }

    void createtree();  // Declaration of createtree() method
    void Preorder() { Preorder(root); }  // Inline calls for traversal
    void Preorder(Node *p);
    void Postorder() { Postorder(root); }
    void Postorder(Node *p);
    void Inorder() { Inorder(root); }
    void Inorder(Node *p);
    void Levelorder() { Levelorder(root); }
    void Levelorder(Node *p);
    int Height() { return Height(root); }
    int Height(Node *root);
};

void Tree::createtree()
{
    Node *p, *t;
    int x;
    Queue q(100);

    printf("Enter root value: ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("Enter right child of %d: ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

void Tree::Levelorder(Node *root)
{
    Queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while (!q.isEmpty())
    {
        root = q.dequeue();
        if (root->lchild)
        {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
        if (root->rchild)
        {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}

int Tree::Height(Node *root)
{
    int x = 0, y = 0;
    if (root == 0)
    {
        return 0;
    }
    x = Height(root->lchild);
    y = Height(root->rchild);
    return x > y ? x + 1 : y + 1;
}

int main()
{
    Tree t;
    t.createtree();

    cout << "Preorder: ";
    t.Preorder();
    cout << endl;

    cout << "Inorder: ";
    t.Inorder();
    cout << endl;

    cout << "Level order: ";
    t.Levelorder();
    cout << endl;

    return 0;
}
