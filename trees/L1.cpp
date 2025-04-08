#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* right;
  node* left;

  node(int d){
    data=d;
    this->left=NULL;
    this->right = NULL;
  }
};

node* buildTree(node* root){
  cout<< "Enter the data : "<<endl;
  int data;
  cin>> data;
  root=new node(data);

  //recursive call;
  if(data==-1){
    return NULL;
  }
  cout<< "Enter data for the left of "<<data<<endl;
  root->left = buildTree(root->left);
  cout<< "Enter data for the right of "<<data<<endl;
  root->right = buildTree(root->right);
}

int main(){
  node* root=NULL;
  root=buildTree(root);
}