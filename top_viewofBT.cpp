#include<iostream>
#include<map>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void topview(Node* root,map<int,pair<int,int> > &m,int dist,int level){
    if(root==NULL){
        return;
    }
    if(m.count(dist)==0 || m[dist].second>level){
        m[dist]=make_pair(root->data,level);
    }
    
    topview(root->left,m,dist-1,level+1);
    topview(root->right,m,dist+1,level+1);
}
int main(){
Node* root=new Node(1);
    root->left= new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    map<int,pair<int,int> > m;
    topview(root,m,0,0);
 
   for(auto i: m){
    cout<<i.second.first<<" ";
   }
   cout<<endl;
    cout<<endl;
    return 0;
}