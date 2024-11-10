#include<iostream>
using namespace std;

struct node{
int data;
node * left;
node * right;

node(int value):data(value),left(nullptr),right(nullptr){}};

void iot(node*root){
if(root==nullptr){return ;}
iot(root->left);
cout<<root->data<<" ";
iot(root->right);}

int main(){
node* root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
root->right->right=new node(6);
root->right->left=new node(7);

iot(root);
return 0;



}