#include<iostream>
using namespace std;

struct node{
int data;
node*left;
node*right;
node(int value):data(value),left(nullptr),right(nullptr){}
};

node* insert(node* root, int value){
if(root==nullptr){root=new node(value);}
if(root->data>value){root->left=insert(root->left,value);
}
else if(root->data<value){root->right=insert(root->right,value);}
return root;
}

bool search(node*root,int value){
if(root==nullptr){return false;}
if(root->data==value){return true;}
else if(root->data>value){return search(root->left,value);}
else if(root->data<value){return search(root->right,value);}
return root;
}


int main(){
node*root=nullptr;
root=insert(root,8);
insert(root,3);
insert(root,10);
insert(root,1);
insert(root,6);

cout<<(search(root,10)?"Found":"Not Found!!!")<<endl;
cout<<(search(root,26)?"Found":"Not found!")<<endl;
return 0;
}
