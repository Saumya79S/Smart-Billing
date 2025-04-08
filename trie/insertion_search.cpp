#include<iostream>
using namespace std;
class trieNode{
  public:
  char data;
  trieNode* children[26];
  bool isTerminal;

  trieNode(char ch){
    data=ch;
    for(int i=0; i<26 ; i++){
      children[i]=NULL;
    }
    isTerminal=false;
  }
};

class Trie{
  public:
  trieNode* root;
  Trie(){
    root=new trieNode('0');
  }

  void insertUtil(trieNode*root , string word){
    // base case
    if(word.length()==0){
      root->isTerminal=true;
      return;
    }

    int index=word[0]-'A';
    trieNode* child;

    //present
    if(root->children[index]!=NULL){
      child=root->children[index];
    }
    //absent
    else{
      child = new trieNode(word[0]);
      root->children[index]=child;
    }

    insertUtil(child , word.substr(1));
    return;
  }

  void inserWord(string word){
    insertUtil(root,word);
  }

// 2rd function
bool IfPresentUtil(trieNode* root, string nam){
  trieNode* child;
  if(nam.length()==0 ){
    return root->isTerminal;
  }
  int index = nam[0] - 'A';
  //present
  if(root->children[index]!=NULL){
    child=root->children[index];
  }
  else {
  return false;
  }
  return IfPresentUtil(child , nam.substr(1));
}
bool IfPresent(string nam){
  return IfPresentUtil(root , nam);
}


// 3rd fun 
void removeWordUtil(trieNode* root , string word){
  if(IfPresent(word)){
    root->isTerminal= false;
    return;
  }
  else{
    cout<<"string absent already"<<endl;
    return;
  }
}
void removeWord(string word){
  removeWordUtil(root , word);
}
};



int main(){
  Trie *t=new Trie();
  t->inserWord("ABC");
  t->inserWord("DEF");
  t->inserWord("GHI");
  t->inserWord("JKL");
  cout<< " Present or not "<< t->IfPresent("ABC") << endl;
  t->removeWord("ABC");
  cout<< " Present or not "<< t->IfPresent("ABC") << endl;
  t->removeWord("XYZ");
  return 0;
}