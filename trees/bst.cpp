#include<iostream>
using namespace std;
class node{
  public:
  int data;
  char colour;
  node* left;
  node* right;

  node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};

node* InsertIntoBST(node* &root , int d){
  // base case
  if(root==NULL){
    root=new node(d);
    return root;
  }

  if(root->data > d){
    root->left=InsertIntoBST(root->left , d);
  }
  else {
    root->right=InsertIntoBST(root->right , d);
  }
}



void takeInput(node* &root){
  int next;
  cin>> next;
  while(next!=-1){
    root=InsertIntoBST(root , next);
    cin>> next;
  }
}

int main(){
  node* root=NULL;
  cout << " Enter the nodes : " ;
  takeInput(root);
  return 0;
}